double T_MIN = 250;
double T_MAX = 1999;

double P_MIN = 5;
double P_MAX = 499;

double enlayers0weights[2][50] = {
    {1.2889e+00,  4.4718e-01,  7.2290e-01, -3.2180e-01, -3.2721e-01,
        -1.2741e+00,  8.6473e-01,  9.6622e-01,  9.0832e-01, -8.5891e-01,
        -3.5021e-01, -4.4292e-01, -4.4420e-01,  6.4605e-01, -9.5830e-01,
        -1.0610e+00,  7.7801e-01,  8.9234e-01, -1.4594e+00, -6.4132e-01,
         4.7582e-01, -1.1913e+00, -8.8444e-01, -3.0511e-01, -2.2127e-01,
        -9.7478e-01,  6.0510e-01,  1.3980e-01,  6.8469e-01, -1.1611e+00,
         1.6291e-01, -5.9718e-01, -1.6766e-01, -9.8992e-01, -1.5763e+00,
         1.8676e-01,  4.1663e-01, -4.8451e-01, -6.5565e-01, -2.2668e+00,
        -1.0259e+00, -3.8908e-01, -3.3784e-01, -2.7497e-01, -3.2440e-01,
         1.1114e+00,  9.5687e-01,  6.5317e-01,  4.0937e-01, -2.0332e-01 },
    {1.9163e+00, -4.2797e-02, -1.1099e-01, -4.7303e-02, -8.5913e-02,
         6.3138e-01, -6.5277e+00, -9.1249e+00, -4.2232e+00, -4.5452e+00,
        -2.1410e-02,  3.4037e+00,  1.4092e-02, -7.1452e-02,  8.2086e+00,
         5.4322e+00,  3.7712e+00, -6.2321e+00,  2.4299e+01, -2.7187e-01,
        -1.4492e-02, -3.9290e+00,  9.1841e+00, -6.5349e-02, -1.1942e-01,
        -5.2374e+00, -2.5597e-02,  1.6332e-01,  3.0894e+00, -6.3553e+00,
         1.4707e-01,  4.0162e-02, -1.4293e-01,  1.1032e+01, -9.8250e+00,
         1.5529e-01, -2.7605e-02,  2.3876e+00, -1.2967e+00, -1.8458e+01,
        -4.2243e+00, -4.2004e-03, -2.8998e-02, -6.4331e-02, -4.3833e-02,
        -2.2930e+00, -3.5966e-01,  1.8460e+00,  3.7000e-03, -1.3942e-01 }};

double enlayers0bias[1][50] = { 
        -0.0869,  1.1628, -0.1682, -0.8751, -0.4487,  0.9426, -0.8952, -1.2244,
        -0.4556, -0.7026, -0.9744, -0.0427, -0.6643,  0.1617,  1.2123,  0.3675,
         0.7599, -0.8932,  1.8859, -1.7578,  0.4908,  0.1769,  1.0941, -0.7976,
        -0.8903, -0.4766, -0.0742,  1.2686,  1.2647, -0.2005,  1.2007, -0.1135,
        -1.2153,  1.2035, -0.0165,  0.7715,  1.1531, -0.2233, -1.5375, -0.4541,
        -0.1246, -0.8783, -1.0020, -1.1630, -0.9143, -0.5051, -0.5769,  1.5438,
         0.7103, -0.7667
};

double enlayers1weights[50][1] = {
    1.5624,  0.7824,  1.4865, -0.8214, -0.8056, -1.1941,  2.1200,  2.4454,
          1.6408, -0.7681, -0.8060, -1.1577, -0.7491,  0.9565, -2.0069, -1.2421,
          0.9093,  2.1817, -3.1803, -0.7295,  0.9376, -1.1125, -2.6701, -1.0479,
         -1.1119, -0.6842,  1.6288,  0.8886,  0.7865, -0.8540,  0.8303, -1.3470,
         -0.8996, -2.6632, -1.4400,  0.9259,  0.7240, -0.9106, -1.3361, -1.6465,
         -0.6695, -0.9375, -0.8346, -0.7985, -1.2949,  1.2831,  1.0836,  0.7574,
          0.9118, -0.4451
};

double enlayers1bias = 0.6153;