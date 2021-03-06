% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/multivariance-functions.R
\name{tetrahedron}
\alias{tetrahedron}
\title{dependence example: tetrahedron sampling}
\usage{
tetrahedron(N = 1000)
}
\arguments{
\item{N}{number of samples}
}
\value{
It returns the samples of the events r, g and b as rows of a \code{N} by 3 matrix (the first column corresponds to r, the second to g,...). TRUE indicates that this color is on the bottom side of the dice. The columns are dependent but 2-independent.
}
\description{
This function creates samples of a tetrahedron-dice colored r, g, b and rgb. Each sample indicates if for the thrown dice the colors r, g and b are contained on the bottom side of the dice.
}
\examples{
tetrahedron(10)

}
\references{
For the theoretic background see the reference [3] given on the main help page of this package: \link{multivariance-package}.
}
