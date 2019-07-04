test_that("Connect to OmniSci on localhost and get tables in database", {
  
  conn <- connect("localhost", 6274, "mapd", "HyperInteractive", "mapd")
  gt <- get_tables(conn)

  # This doesn't have to be strictly true for all databases, but will hold
  # on a stock Docker container
  expect_true(length(gt)> 0)

})