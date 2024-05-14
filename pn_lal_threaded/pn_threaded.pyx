# Copyright (C) 2024 Ian Harry

import cython
cimport numpy

cdef extern from "pn_threaded_lib.c":
    void _ThreadedPNFunction(double* data);


def ThreadedPNFunction(
  numpy.ndarray[numpy.complex64_t, ndim=1, mode="c"] data
)
    _ThreadedPNFunction(data)
