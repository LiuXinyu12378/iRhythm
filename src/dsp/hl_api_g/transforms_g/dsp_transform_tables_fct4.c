#include "dsp_transform_tables_fct4.h"

#ifdef _ARC
#pragma On(Each_var_in_own_section)
#endif

const q15_t fct_twf_q15[2<<FCT_MAX_LOGN] = {
 #if (FCT_MAX_LOGN >= 3) /* 32 bytes */
  0x5a82, 0x7642, 0x30fc, 0x7d8a, 0x6a6e, 0x471d, 0x18f9, 0x7f62,
  0x7a7d, 0x70e3, 0x62f2, 0x5134, 0x3c57, 0x2528, 0x0c8c, 0x7fd9,
 #endif
 #if (FCT_MAX_LOGN >= 4) /* 128 bytes */
  0x7e9d, 0x7c2a, 0x7885, 0x73b6, 0x6dca, 0x66d0, 0x5ed7, 0x55f6,
  0x4c40, 0x41ce, 0x36ba, 0x2b1f, 0x1f1a, 0x12c8, 0x0648, 0x7ff6,
 #endif
 #if (FCT_MAX_LOGN >= 5) /* 256 bytes */
  0x7fa7, 0x7f0a, 0x7e1e, 0x7ce4, 0x7b5d, 0x798a, 0x776c, 0x7505,
  0x7255, 0x6f5f, 0x6c24, 0x68a7, 0x64e9, 0x60ec, 0x5cb4, 0x5843,
  0x539b, 0x4ec0, 0x49b4, 0x447b, 0x3f17, 0x398d, 0x33df, 0x2e11,
  0x2827, 0x2224, 0x1c0c, 0x15e2, 0x0fab, 0x096b, 0x0324, 0x7ffe,
 #endif
 #if (FCT_MAX_LOGN >= 6) /* 512 bytes */
  0x7fea, 0x7fc2, 0x7f87, 0x7f38, 0x7ed6, 0x7e60, 0x7dd6, 0x7d3a,
  0x7c89, 0x7bc6, 0x7aef, 0x7a06, 0x790a, 0x77fb, 0x76d9, 0x75a6,
  0x7460, 0x7308, 0x719e, 0x7023, 0x6e97, 0x6cf9, 0x6b4b, 0x698c,
  0x67bd, 0x65de, 0x63ef, 0x61f1, 0x5fe4, 0x5dc8, 0x5b9d, 0x5964,
  0x571e, 0x54ca, 0x5269, 0x4ffb, 0x4d81, 0x4afb, 0x486a, 0x45cd,
  0x4326, 0x4074, 0x3db8, 0x3af3, 0x3825, 0x354e, 0x326e, 0x2f87,
  0x2c99, 0x29a4, 0x26a8, 0x23a7, 0x209f, 0x1d93, 0x1a83, 0x176e,
  0x1455, 0x113a, 0x0e1c, 0x0afb, 0x07d9, 0x04b6, 0x0192, 0x7fff,
 #endif
 #if (FCT_MAX_LOGN >= 7) /* 1024 bytes */
  0x7ffa, 0x7ff1, 0x7fe2, 0x7fce, 0x7fb5, 0x7f98, 0x7f75, 0x7f4e,
  0x7f22, 0x7ef0, 0x7eba, 0x7e7f, 0x7e3f, 0x7dfb, 0x7db1, 0x7d63,
  0x7d0f, 0x7cb7, 0x7c5a, 0x7bf9, 0x7b92, 0x7b27, 0x7ab7, 0x7a42,
  0x79c9, 0x794a, 0x78c8, 0x7840, 0x77b4, 0x7723, 0x768e, 0x75f4,
  0x7556, 0x74b3, 0x740b, 0x735f, 0x72af, 0x71fa, 0x7141, 0x7083,
  0x6fc2, 0x6efb, 0x6e31, 0x6d62, 0x6c8f, 0x6bb8, 0x6add, 0x69fd,
  0x691a, 0x6832, 0x6747, 0x6657, 0x6564, 0x646c, 0x6371, 0x6272,
  0x616f, 0x6068, 0x5f5e, 0x5e50, 0x5d3e, 0x5c29, 0x5b10, 0x59f4,
  0x58d4, 0x57b1, 0x568a, 0x5560, 0x5433, 0x5303, 0x51cf, 0x5098,
  0x4f5e, 0x4e21, 0x4ce1, 0x4b9e, 0x4a58, 0x490f, 0x47c4, 0x4675,
  0x4524, 0x43d1, 0x427a, 0x4121, 0x3fc6, 0x3e68, 0x3d08, 0x3ba5,
  0x3a40, 0x38d9, 0x3770, 0x3604, 0x3497, 0x3327, 0x31b5, 0x3042,
  0x2ecc, 0x2d55, 0x2bdc, 0x2a62, 0x28e5, 0x2768, 0x25e8, 0x2467,
  0x22e5, 0x2162, 0x1fdd, 0x1e57, 0x1cd0, 0x1b47, 0x19be, 0x1833,
  0x16a8, 0x151c, 0x138f, 0x1201, 0x1073, 0x0ee4, 0x0d54, 0x0bc4,
  0x0a33, 0x08a2, 0x0711, 0x057f, 0x03ed, 0x025b, 0x00c9, 0x7fff,
 #endif
 #if (FCT_MAX_LOGN >= 8) /* 2048 bytes */
  0x7fff, 0x7ffc, 0x7ff8, 0x7ff4, 0x7fed, 0x7fe6, 0x7fdd, 0x7fd3,
  0x7fc8, 0x7fbc, 0x7fae, 0x7fa0, 0x7f90, 0x7f7e, 0x7f6c, 0x7f58,
  0x7f43, 0x7f2d, 0x7f16, 0x7efd, 0x7ee3, 0x7ec8, 0x7eac, 0x7e8e,
  0x7e70, 0x7e50, 0x7e2f, 0x7e0c, 0x7de9, 0x7dc4, 0x7d9e, 0x7d77,
  0x7d4e, 0x7d25, 0x7cfa, 0x7cce, 0x7ca0, 0x7c72, 0x7c42, 0x7c11,
  0x7bdf, 0x7bac, 0x7b78, 0x7b42, 0x7b0b, 0x7ad3, 0x7a9a, 0x7a60,
  0x7a24, 0x79e7, 0x79aa, 0x796a, 0x792a, 0x78e9, 0x78a6, 0x7863,
  0x781e, 0x77d8, 0x7790, 0x7748, 0x76fe, 0x76b4, 0x7668, 0x761b,
  0x75cd, 0x757e, 0x752d, 0x74dc, 0x7489, 0x7436, 0x73e1, 0x738b,
  0x7334, 0x72dc, 0x7282, 0x7228, 0x71cc, 0x7170, 0x7112, 0x70b3,
  0x7053, 0x6ff2, 0x6f90, 0x6f2d, 0x6ec9, 0x6e64, 0x6dfe, 0x6d96,
  0x6d2e, 0x6cc4, 0x6c5a, 0x6bee, 0x6b82, 0x6b14, 0x6aa5, 0x6a36,
  0x69c5, 0x6953, 0x68e0, 0x686d, 0x67f8, 0x6782, 0x670b, 0x6693,
  0x661b, 0x65a1, 0x6526, 0x64ab, 0x642e, 0x63b0, 0x6332, 0x62b2,
  0x6232, 0x61b0, 0x612e, 0x60aa, 0x6026, 0x5fa1, 0x5f1b, 0x5e94,
  0x5e0c, 0x5d83, 0x5cf9, 0x5c6f, 0x5be3, 0x5b57, 0x5ac9, 0x5a3b,
  0x59ac, 0x591c, 0x588c, 0x57fa, 0x5767, 0x56d4, 0x5640, 0x55ab,
  0x5515, 0x547f, 0x53e7, 0x534f, 0x52b6, 0x521c, 0x5181, 0x50e6,
  0x504a, 0x4fad, 0x4f0f, 0x4e71, 0x4dd1, 0x4d31, 0x4c91, 0x4bef,
  0x4b4d, 0x4aaa, 0x4a06, 0x4962, 0x48bd, 0x4817, 0x4770, 0x46c9,
  0x4621, 0x4579, 0x44d0, 0x4426, 0x437b, 0x42d0, 0x4224, 0x4178,
  0x40cb, 0x401d, 0x3f6f, 0x3ec0, 0x3e10, 0x3d60, 0x3caf, 0x3bfe,
  0x3b4c, 0x3a9a, 0x39e7, 0x3933, 0x387f, 0x37ca, 0x3715, 0x365f,
  0x35a9, 0x34f2, 0x343b, 0x3383, 0x32cb, 0x3212, 0x3159, 0x309f,
  0x2fe5, 0x2f2a, 0x2e6f, 0x2db3, 0x2cf7, 0x2c3b, 0x2b7e, 0x2ac1,
  0x2a03, 0x2945, 0x2886, 0x27c7, 0x2708, 0x2648, 0x2588, 0x24c8,
  0x2407, 0x2346, 0x2284, 0x21c3, 0x2101, 0x203e, 0x1f7b, 0x1eb8,
  0x1df5, 0x1d31, 0x1c6e, 0x1ba9, 0x1ae5, 0x1a20, 0x195b, 0x1896,
  0x17d1, 0x170b, 0x1645, 0x157f, 0x14b9, 0x13f2, 0x132b, 0x1265,
  0x119e, 0x10d6, 0x100f, 0x0f47, 0x0e80, 0x0db8, 0x0cf0, 0x0c28,
  0x0b60, 0x0a97, 0x09cf, 0x0906, 0x083e, 0x0775, 0x06ac, 0x05e3,
  0x051b, 0x0452, 0x0389, 0x02c0, 0x01f7, 0x012e, 0x0065, 0x7fff,
 #endif
 #if (FCT_MAX_LOGN >= 9) /* 4096 bytes */
  0x7fff, 0x7fff, 0x7ffe, 0x7ffd, 0x7ffb, 0x7ff9, 0x7ff7, 0x7ff5,
  0x7ff2, 0x7fef, 0x7fec, 0x7fe8, 0x7fe4, 0x7fe0, 0x7fdb, 0x7fd6,
  0x7fd1, 0x7fcb, 0x7fc5, 0x7fbf, 0x7fb9, 0x7fb2, 0x7fab, 0x7fa3,
  0x7f9c, 0x7f94, 0x7f8b, 0x7f83, 0x7f7a, 0x7f71, 0x7f67, 0x7f5d,
  0x7f53, 0x7f49, 0x7f3e, 0x7f33, 0x7f27, 0x7f1c, 0x7f10, 0x7f03,
  0x7ef7, 0x7eea, 0x7edd, 0x7ecf, 0x7ec1, 0x7eb3, 0x7ea5, 0x7e96,
  0x7e87, 0x7e78, 0x7e68, 0x7e58, 0x7e48, 0x7e37, 0x7e26, 0x7e15,
  0x7e03, 0x7df2, 0x7de0, 0x7dcd, 0x7dba, 0x7da7, 0x7d94, 0x7d81,
  0x7d6d, 0x7d58, 0x7d44, 0x7d2f, 0x7d1a, 0x7d05, 0x7cef, 0x7cd9,
  0x7cc2, 0x7cac, 0x7c95, 0x7c7e, 0x7c66, 0x7c4e, 0x7c36, 0x7c1e,
  0x7c05, 0x7bec, 0x7bd3, 0x7bb9, 0x7b9f, 0x7b85, 0x7b6a, 0x7b50,
  0x7b34, 0x7b19, 0x7afd, 0x7ae1, 0x7ac5, 0x7aa8, 0x7a8c, 0x7a6e,
  0x7a51, 0x7a33, 0x7a15, 0x79f7, 0x79d8, 0x79b9, 0x799a, 0x797a,
  0x795b, 0x793a, 0x791a, 0x78f9, 0x78d8, 0x78b7, 0x7895, 0x7874,
  0x7851, 0x782f, 0x780c, 0x77e9, 0x77c6, 0x77a2, 0x777e, 0x775a,
  0x7736, 0x7711, 0x76ec, 0x76c7, 0x76a1, 0x767b, 0x7655, 0x762e,
  0x7608, 0x75e1, 0x75b9, 0x7592, 0x756a, 0x7542, 0x7519, 0x74f0,
  0x74c7, 0x749e, 0x7475, 0x744b, 0x7421, 0x73f6, 0x73cb, 0x73a0,
  0x7375, 0x734a, 0x731e, 0x72f2, 0x72c5, 0x7299, 0x726c, 0x723f,
  0x7211, 0x71e3, 0x71b5, 0x7187, 0x7158, 0x712a, 0x70fa, 0x70cb,
  0x709b, 0x706b, 0x703b, 0x700b, 0x6fda, 0x6fa9, 0x6f78, 0x6f46,
  0x6f14, 0x6ee2, 0x6eb0, 0x6e7d, 0x6e4a, 0x6e17, 0x6de4, 0x6db0,
  0x6d7c, 0x6d48, 0x6d14, 0x6cdf, 0x6caa, 0x6c75, 0x6c3f, 0x6c09,
  0x6bd3, 0x6b9d, 0x6b66, 0x6b30, 0x6af8, 0x6ac1, 0x6a89, 0x6a52,
  0x6a1a, 0x69e1, 0x69a9, 0x6970, 0x6937, 0x68fd, 0x68c4, 0x688a,
  0x6850, 0x6815, 0x67da, 0x67a0, 0x6764, 0x6729, 0x66ed, 0x66b2,
  0x6675, 0x6639, 0x65fc, 0x65c0, 0x6582, 0x6545, 0x6507, 0x64ca,
  0x648b, 0x644d, 0x640f, 0x63d0, 0x6391, 0x6351, 0x6312, 0x62d2,
  0x6292, 0x6252, 0x6211, 0x61d1, 0x6190, 0x614e, 0x610d, 0x60cb,
  0x6089, 0x6047, 0x6005, 0x5fc2, 0x5f80, 0x5f3c, 0x5ef9, 0x5eb6,
  0x5e72, 0x5e2e, 0x5dea, 0x5da5, 0x5d61, 0x5d1c, 0x5cd7, 0x5c91,
  0x5c4c, 0x5c06, 0x5bc0, 0x5b7a, 0x5b34, 0x5aed, 0x5aa6, 0x5a5f,
  0x5a18, 0x59d0, 0x5988, 0x5940, 0x58f8, 0x58b0, 0x5867, 0x581e,
  0x57d5, 0x578c, 0x5743, 0x56f9, 0x56af, 0x5665, 0x561b, 0x55d0,
  0x5586, 0x553b, 0x54f0, 0x54a4, 0x5459, 0x540d, 0x53c1, 0x5375,
  0x5329, 0x52dc, 0x5290, 0x5243, 0x51f5, 0x51a8, 0x515b, 0x510d,
  0x50bf, 0x5071, 0x5023, 0x4fd4, 0x4f85, 0x4f37, 0x4ee8, 0x4e98,
  0x4e49, 0x4df9, 0x4da9, 0x4d59, 0x4d09, 0x4cb9, 0x4c68, 0x4c17,
  0x4bc7, 0x4b75, 0x4b24, 0x4ad3, 0x4a81, 0x4a2f, 0x49dd, 0x498b,
  0x4939, 0x48e6, 0x4893, 0x4840, 0x47ed, 0x479a, 0x4747, 0x46f3,
  0x469f, 0x464b, 0x45f7, 0x45a3, 0x454f, 0x44fa, 0x44a5, 0x4450,
  0x43fb, 0x43a6, 0x4351, 0x42fb, 0x42a5, 0x424f, 0x41f9, 0x41a3,
  0x414d, 0x40f6, 0x409f, 0x4048, 0x3ff1, 0x3f9a, 0x3f43, 0x3eec,
  0x3e94, 0x3e3c, 0x3de4, 0x3d8c, 0x3d34, 0x3cdc, 0x3c83, 0x3c2a,
  0x3bd2, 0x3b79, 0x3b20, 0x3ac6, 0x3a6d, 0x3a13, 0x39ba, 0x3960,
  0x3906, 0x38ac, 0x3852, 0x37f7, 0x379d, 0x3742, 0x36e8, 0x368d,
  0x3632, 0x35d7, 0x357b, 0x3520, 0x34c4, 0x3469, 0x340d, 0x33b1,
  0x3355, 0x32f9, 0x329d, 0x3240, 0x31e4, 0x3187, 0x312a, 0x30cd,
  0x3070, 0x3013, 0x2fb6, 0x2f59, 0x2efb, 0x2e9e, 0x2e40, 0x2de2,
  0x2d84, 0x2d26, 0x2cc8, 0x2c6a, 0x2c0c, 0x2bad, 0x2b4f, 0x2af0,
  0x2a91, 0x2a32, 0x29d3, 0x2974, 0x2915, 0x28b6, 0x2856, 0x27f7,
  0x2797, 0x2738, 0x26d8, 0x2678, 0x2618, 0x25b8, 0x2558, 0x24f8,
  0x2498, 0x2437, 0x23d7, 0x2376, 0x2316, 0x22b5, 0x2254, 0x21f3,
  0x2192, 0x2131, 0x20d0, 0x206f, 0x200e, 0x1fac, 0x1f4b, 0x1ee9,
  0x1e88, 0x1e26, 0x1dc4, 0x1d62, 0x1d01, 0x1c9f, 0x1c3d, 0x1bda,
  0x1b78, 0x1b16, 0x1ab4, 0x1a51, 0x19ef, 0x198d, 0x192a, 0x18c7,
  0x1865, 0x1802, 0x179f, 0x173c, 0x16da, 0x1677, 0x1614, 0x15b1,
  0x154d, 0x14ea, 0x1487, 0x1424, 0x13c1, 0x135d, 0x12fa, 0x1296,
  0x1233, 0x11cf, 0x116c, 0x1108, 0x10a4, 0x1041, 0x0fdd, 0x0f79,
  0x0f15, 0x0eb2, 0x0e4e, 0x0dea, 0x0d86, 0x0d22, 0x0cbe, 0x0c5a,
  0x0bf6, 0x0b92, 0x0b2d, 0x0ac9, 0x0a65, 0x0a01, 0x099d, 0x0938,
  0x08d4, 0x0870, 0x080c, 0x07a7, 0x0743, 0x06de, 0x067a, 0x0616,
  0x05b1, 0x054d, 0x04e8, 0x0484, 0x041f, 0x03bb, 0x0356, 0x02f2,
  0x028d, 0x0229, 0x01c4, 0x0160, 0x00fb, 0x0097, 0x0032, 0x7fff,
 #endif
 #if (FCT_MAX_LOGN >= 10) /* 8192 bytes */
  0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7ffe, 0x7ffe, 0x7ffd,
  0x7ffd, 0x7ffc, 0x7ffb, 0x7ffa, 0x7ff9, 0x7ff8, 0x7ff7, 0x7ff6,
  0x7ff4, 0x7ff3, 0x7ff1, 0x7ff0, 0x7fee, 0x7fec, 0x7feb, 0x7fe9,
  0x7fe7, 0x7fe5, 0x7fe3, 0x7fe1, 0x7fde, 0x7fdc, 0x7fda, 0x7fd7,
  0x7fd5, 0x7fd2, 0x7fcf, 0x7fcd, 0x7fca, 0x7fc7, 0x7fc4, 0x7fc1,
  0x7fbe, 0x7fba, 0x7fb7, 0x7fb4, 0x7fb0, 0x7fad, 0x7fa9, 0x7fa5,
  0x7fa2, 0x7f9e, 0x7f9a, 0x7f96, 0x7f92, 0x7f8e, 0x7f89, 0x7f85,
  0x7f81, 0x7f7c, 0x7f78, 0x7f73, 0x7f6e, 0x7f6a, 0x7f65, 0x7f60,
  0x7f5b, 0x7f56, 0x7f50, 0x7f4b, 0x7f46, 0x7f41, 0x7f3b, 0x7f36,
  0x7f30, 0x7f2a, 0x7f24, 0x7f1f, 0x7f19, 0x7f13, 0x7f0d, 0x7f06,
  0x7f00, 0x7efa, 0x7ef4, 0x7eed, 0x7ee7, 0x7ee0, 0x7ed9, 0x7ed3,
  0x7ecc, 0x7ec5, 0x7ebe, 0x7eb7, 0x7eb0, 0x7ea8, 0x7ea1, 0x7e9a,
  0x7e92, 0x7e8b, 0x7e83, 0x7e7b, 0x7e74, 0x7e6c, 0x7e64, 0x7e5c,
  0x7e54, 0x7e4c, 0x7e43, 0x7e3b, 0x7e33, 0x7e2a, 0x7e22, 0x7e19,
  0x7e11, 0x7e08, 0x7dff, 0x7df6, 0x7ded, 0x7de4, 0x7ddb, 0x7dd2,
  0x7dc9, 0x7dbf, 0x7db6, 0x7dac, 0x7da3, 0x7d99, 0x7d8f, 0x7d85,
  0x7d7c, 0x7d72, 0x7d68, 0x7d5d, 0x7d53, 0x7d49, 0x7d3f, 0x7d34,
  0x7d2a, 0x7d1f, 0x7d15, 0x7d0a, 0x7cff, 0x7cf4, 0x7ce9, 0x7cde,
  0x7cd3, 0x7cc8, 0x7cbd, 0x7cb1, 0x7ca6, 0x7c9b, 0x7c8f, 0x7c83,
  0x7c78, 0x7c6c, 0x7c60, 0x7c54, 0x7c48, 0x7c3c, 0x7c30, 0x7c24,
  0x7c18, 0x7c0b, 0x7bff, 0x7bf2, 0x7be6, 0x7bd9, 0x7bcc, 0x7bbf,
  0x7bb3, 0x7ba6, 0x7b99, 0x7b8b, 0x7b7e, 0x7b71, 0x7b64, 0x7b56,
  0x7b49, 0x7b3b, 0x7b2e, 0x7b20, 0x7b12, 0x7b04, 0x7af6, 0x7ae8,
  0x7ada, 0x7acc, 0x7abe, 0x7ab0, 0x7aa1, 0x7a93, 0x7a84, 0x7a76,
  0x7a67, 0x7a58, 0x7a49, 0x7a3b, 0x7a2c, 0x7a1d, 0x7a0e, 0x79fe,
  0x79ef, 0x79e0, 0x79d0, 0x79c1, 0x79b1, 0x79a2, 0x7992, 0x7982,
  0x7972, 0x7962, 0x7953, 0x7942, 0x7932, 0x7922, 0x7912, 0x7901,
  0x78f1, 0x78e1, 0x78d0, 0x78bf, 0x78af, 0x789e, 0x788d, 0x787c,
  0x786b, 0x785a, 0x7849, 0x7838, 0x7826, 0x7815, 0x7803, 0x77f2,
  0x77e0, 0x77cf, 0x77bd, 0x77ab, 0x7799, 0x7787, 0x7775, 0x7763,
  0x7751, 0x773f, 0x772d, 0x771a, 0x7708, 0x76f5, 0x76e3, 0x76d0,
  0x76bd, 0x76aa, 0x7698, 0x7685, 0x7672, 0x765e, 0x764b, 0x7638,
  0x7625, 0x7611, 0x75fe, 0x75ea, 0x75d7, 0x75c3, 0x75af, 0x759c,
  0x7588, 0x7574, 0x7560, 0x754c, 0x7538, 0x7523, 0x750f, 0x74fb,
  0x74e6, 0x74d2, 0x74bd, 0x74a8, 0x7494, 0x747f, 0x746a, 0x7455,
  0x7440, 0x742b, 0x7416, 0x7401, 0x73eb, 0x73d6, 0x73c1, 0x73ab,
  0x7396, 0x7380, 0x736a, 0x7355, 0x733f, 0x7329, 0x7313, 0x72fd,
  0x72e7, 0x72d0, 0x72ba, 0x72a4, 0x728d, 0x7277, 0x7260, 0x724a,
  0x7233, 0x721c, 0x7206, 0x71ef, 0x71d8, 0x71c1, 0x71aa, 0x7193,
  0x717b, 0x7164, 0x714d, 0x7135, 0x711e, 0x7106, 0x70ef, 0x70d7,
  0x70bf, 0x70a7, 0x708f, 0x7077, 0x705f, 0x7047, 0x702f, 0x7017,
  0x6fff, 0x6fe6, 0x6fce, 0x6fb5, 0x6f9d, 0x6f84, 0x6f6b, 0x6f53,
  0x6f3a, 0x6f21, 0x6f08, 0x6eef, 0x6ed6, 0x6ebd, 0x6ea3, 0x6e8a,
  0x6e71, 0x6e57, 0x6e3e, 0x6e24, 0x6e0a, 0x6df1, 0x6dd7, 0x6dbd,
  0x6da3, 0x6d89, 0x6d6f, 0x6d55, 0x6d3b, 0x6d21, 0x6d06, 0x6cec,
  0x6cd2, 0x6cb7, 0x6c9d, 0x6c82, 0x6c67, 0x6c4c, 0x6c32, 0x6c17,
  0x6bfc, 0x6be1, 0x6bc6, 0x6baa, 0x6b8f, 0x6b74, 0x6b59, 0x6b3d,
  0x6b22, 0x6b06, 0x6aeb, 0x6acf, 0x6ab3, 0x6a97, 0x6a7c, 0x6a60,
  0x6a44, 0x6a28, 0x6a0b, 0x69ef, 0x69d3, 0x69b7, 0x699a, 0x697e,
  0x6961, 0x6945, 0x6928, 0x690c, 0x68ef, 0x68d2, 0x68b5, 0x6898,
  0x687b, 0x685e, 0x6841, 0x6824, 0x6806, 0x67e9, 0x67cc, 0x67ae,
  0x6791, 0x6773, 0x6756, 0x6738, 0x671a, 0x66fc, 0x66de, 0x66c1,
  0x66a3, 0x6684, 0x6666, 0x6648, 0x662a, 0x660c, 0x65ed, 0x65cf,
  0x65b0, 0x6592, 0x6573, 0x6554, 0x6536, 0x6517, 0x64f8, 0x64d9,
  0x64ba, 0x649b, 0x647c, 0x645d, 0x643e, 0x641e, 0x63ff, 0x63df,
  0x63c0, 0x63a0, 0x6381, 0x6361, 0x6342, 0x6322, 0x6302, 0x62e2,
  0x62c2, 0x62a2, 0x6282, 0x6262, 0x6242, 0x6221, 0x6201, 0x61e1,
  0x61c0, 0x61a0, 0x617f, 0x615f, 0x613e, 0x611d, 0x60fd, 0x60dc,
  0x60bb, 0x609a, 0x6079, 0x6058, 0x6037, 0x6016, 0x5ff4, 0x5fd3,
  0x5fb2, 0x5f90, 0x5f6f, 0x5f4d, 0x5f2c, 0x5f0a, 0x5ee8, 0x5ec7,
  0x5ea5, 0x5e83, 0x5e61, 0x5e3f, 0x5e1d, 0x5dfb, 0x5dd9, 0x5db7,
  0x5d94, 0x5d72, 0x5d50, 0x5d2d, 0x5d0b, 0x5ce8, 0x5cc5, 0x5ca3,
  0x5c80, 0x5c5d, 0x5c3a, 0x5c18, 0x5bf5, 0x5bd2, 0x5baf, 0x5b8c,
  0x5b68, 0x5b45, 0x5b22, 0x5aff, 0x5adb, 0x5ab8, 0x5a94, 0x5a71,
  0x5a4d, 0x5a29, 0x5a06, 0x59e2, 0x59be, 0x599a, 0x5976, 0x5952,
  0x592e, 0x590a, 0x58e6, 0x58c2, 0x589e, 0x5879, 0x5855, 0x5831,
  0x580c, 0x57e8, 0x57c3, 0x579f, 0x577a, 0x5755, 0x5730, 0x570c,
  0x56e7, 0x56c2, 0x569d, 0x5678, 0x5653, 0x562d, 0x5608, 0x55e3,
  0x55be, 0x5598, 0x5573, 0x554e, 0x5528, 0x5502, 0x54dd, 0x54b7,
  0x5491, 0x546c, 0x5446, 0x5420, 0x53fa, 0x53d4, 0x53ae, 0x5388,
  0x5362, 0x533c, 0x5316, 0x52ef, 0x52c9, 0x52a3, 0x527c, 0x5256,
  0x522f, 0x5209, 0x51e2, 0x51bb, 0x5195, 0x516e, 0x5147, 0x5120,
  0x50f9, 0x50d3, 0x50ac, 0x5084, 0x505d, 0x5036, 0x500f, 0x4fe8,
  0x4fc0, 0x4f99, 0x4f72, 0x4f4a, 0x4f23, 0x4efb, 0x4ed4, 0x4eac,
  0x4e84, 0x4e5d, 0x4e35, 0x4e0d, 0x4de5, 0x4dbd, 0x4d95, 0x4d6d,
  0x4d45, 0x4d1d, 0x4cf5, 0x4ccd, 0x4ca5, 0x4c7c, 0x4c54, 0x4c2c,
  0x4c03, 0x4bdb, 0x4bb2, 0x4b8a, 0x4b61, 0x4b38, 0x4b10, 0x4ae7,
  0x4abe, 0x4a95, 0x4a6d, 0x4a44, 0x4a1b, 0x49f2, 0x49c9, 0x49a0,
  0x4976, 0x494d, 0x4924, 0x48fb, 0x48d1, 0x48a8, 0x487f, 0x4855,
  0x482c, 0x4802, 0x47d9, 0x47af, 0x4785, 0x475c, 0x4732, 0x4708,
  0x46de, 0x46b4, 0x468a, 0x4660, 0x4636, 0x460c, 0x45e2, 0x45b8,
  0x458e, 0x4564, 0x4539, 0x450f, 0x44e5, 0x44ba, 0x4490, 0x4466,
  0x443b, 0x4411, 0x43e6, 0x43bb, 0x4391, 0x4366, 0x433b, 0x4310,
  0x42e6, 0x42bb, 0x4290, 0x4265, 0x423a, 0x420f, 0x41e4, 0x41b9,
  0x418d, 0x4162, 0x4137, 0x410c, 0x40e0, 0x40b5, 0x408a, 0x405e,
  0x4033, 0x4007, 0x3fdc, 0x3fb0, 0x3f85, 0x3f59, 0x3f2d, 0x3f01,
  0x3ed6, 0x3eaa, 0x3e7e, 0x3e52, 0x3e26, 0x3dfa, 0x3dce, 0x3da2,
  0x3d76, 0x3d4a, 0x3d1e, 0x3cf2, 0x3cc5, 0x3c99, 0x3c6d, 0x3c41,
  0x3c14, 0x3be8, 0x3bbb, 0x3b8f, 0x3b62, 0x3b36, 0x3b09, 0x3add,
  0x3ab0, 0x3a83, 0x3a57, 0x3a2a, 0x39fd, 0x39d0, 0x39a3, 0x3976,
  0x3949, 0x391d, 0x38f0, 0x38c2, 0x3895, 0x3868, 0x383b, 0x380e,
  0x37e1, 0x37b4, 0x3786, 0x3759, 0x372c, 0x36fe, 0x36d1, 0x36a3,
  0x3676, 0x3648, 0x361b, 0x35ed, 0x35c0, 0x3592, 0x3564, 0x3537,
  0x3509, 0x34db, 0x34ad, 0x3480, 0x3452, 0x3424, 0x33f6, 0x33c8,
  0x339a, 0x336c, 0x333e, 0x3310, 0x32e2, 0x32b4, 0x3285, 0x3257,
  0x3229, 0x31fb, 0x31cc, 0x319e, 0x3170, 0x3141, 0x3113, 0x30e5,
  0x30b6, 0x3088, 0x3059, 0x302a, 0x2ffc, 0x2fcd, 0x2f9f, 0x2f70,
  0x2f41, 0x2f13, 0x2ee4, 0x2eb5, 0x2e86, 0x2e57, 0x2e28, 0x2dfa,
  0x2dcb, 0x2d9c, 0x2d6d, 0x2d3e, 0x2d0f, 0x2ce0, 0x2cb1, 0x2c81,
  0x2c52, 0x2c23, 0x2bf4, 0x2bc5, 0x2b95, 0x2b66, 0x2b37, 0x2b08,
  0x2ad8, 0x2aa9, 0x2a79, 0x2a4a, 0x2a1b, 0x29eb, 0x29bc, 0x298c,
  0x295c, 0x292d, 0x28fd, 0x28ce, 0x289e, 0x286e, 0x283f, 0x280f,
  0x27df, 0x27af, 0x2780, 0x2750, 0x2720, 0x26f0, 0x26c0, 0x2690,
  0x2660, 0x2630, 0x2600, 0x25d0, 0x25a0, 0x2570, 0x2540, 0x2510,
  0x24e0, 0x24b0, 0x2480, 0x244f, 0x241f, 0x23ef, 0x23bf, 0x238e,
  0x235e, 0x232e, 0x22fd, 0x22cd, 0x229d, 0x226c, 0x223c, 0x220b,
  0x21db, 0x21aa, 0x217a, 0x2149, 0x2119, 0x20e8, 0x20b8, 0x2087,
  0x2057, 0x2026, 0x1ff5, 0x1fc5, 0x1f94, 0x1f63, 0x1f32, 0x1f02,
  0x1ed1, 0x1ea0, 0x1e6f, 0x1e3e, 0x1e0e, 0x1ddd, 0x1dac, 0x1d7b,
  0x1d4a, 0x1d19, 0x1ce8, 0x1cb7, 0x1c86, 0x1c55, 0x1c24, 0x1bf3,
  0x1bc2, 0x1b91, 0x1b60, 0x1b2f, 0x1afe, 0x1acc, 0x1a9b, 0x1a6a,
  0x1a39, 0x1a08, 0x19d6, 0x19a5, 0x1974, 0x1943, 0x1911, 0x18e0,
  0x18af, 0x187d, 0x184c, 0x181b, 0x17e9, 0x17b8, 0x1787, 0x1755,
  0x1724, 0x16f2, 0x16c1, 0x168f, 0x165e, 0x162c, 0x15fb, 0x15c9,
  0x1598, 0x1566, 0x1535, 0x1503, 0x14d1, 0x14a0, 0x146e, 0x143d,
  0x140b, 0x13d9, 0x13a8, 0x1376, 0x1344, 0x1313, 0x12e1, 0x12af,
  0x127d, 0x124c, 0x121a, 0x11e8, 0x11b6, 0x1185, 0x1153, 0x1121,
  0x10ef, 0x10bd, 0x108c, 0x105a, 0x1028, 0x0ff6, 0x0fc4, 0x0f92,
  0x0f60, 0x0f2e, 0x0efc, 0x0ecb, 0x0e99, 0x0e67, 0x0e35, 0x0e03,
  0x0dd1, 0x0d9f, 0x0d6d, 0x0d3b, 0x0d09, 0x0cd7, 0x0ca5, 0x0c73,
  0x0c41, 0x0c0f, 0x0bdd, 0x0bab, 0x0b79, 0x0b47, 0x0b14, 0x0ae2,
  0x0ab0, 0x0a7e, 0x0a4c, 0x0a1a, 0x09e8, 0x09b6, 0x0984, 0x0951,
  0x091f, 0x08ed, 0x08bb, 0x0889, 0x0857, 0x0825, 0x07f2, 0x07c0,
  0x078e, 0x075c, 0x072a, 0x06f8, 0x06c5, 0x0693, 0x0661, 0x062f,
  0x05fd, 0x05ca, 0x0598, 0x0566, 0x0534, 0x0501, 0x04cf, 0x049d,
  0x046b, 0x0439, 0x0406, 0x03d4, 0x03a2, 0x0370, 0x033d, 0x030b,
  0x02d9, 0x02a7, 0x0274, 0x0242, 0x0210, 0x01de, 0x01ab, 0x0179,
  0x0147, 0x0114, 0x00e2, 0x00b0, 0x007e, 0x004b, 0x0019, 0x7fff,
 #endif
}; /* fct_twf */
const q31_t fct_twf_q31[2<<FCT_MAX_LOGN] = {
 #if (FCT_MAX_LOGN >= 3) /* 64 bytes */
  0x5a82799a, 0x7641af3d, 0x30fbc54d, 0x7d8a5f40,
  0x6a6d98a4, 0x471cece7, 0x18f8b83c, 0x7f62368f,
  0x7a7d055b, 0x70e2cbc6, 0x62f201ac, 0x5133cc94,
  0x3c56ba70, 0x25280c5e, 0x0c8bd35e, 0x7fd8878e,
 #endif
 #if (FCT_MAX_LOGN >= 4) /* 256 bytes */
  0x7e9d55fc, 0x7c29fbee, 0x78848414, 0x73b5ebd1,
  0x6dca0d14, 0x66cf8120, 0x5ed77c8a, 0x55f5a4d2,
  0x4c3fdff4, 0x41ce1e65, 0x36ba2014, 0x2b1f34eb,
  0x1f19f97b, 0x12c8106f, 0x0647d97c, 0x7ff62182,
 #endif
 #if (FCT_MAX_LOGN >= 5) /* 512 bytes */
  0x7fa736b4, 0x7f0991c4, 0x7e1d93ea, 0x7ce3ceb2,
  0x7b5d039e, 0x798a23b1, 0x776c4edb, 0x7504d345,
  0x72552c85, 0x6f5f02b2, 0x6c242960, 0x68a69e81,
  0x64e88926, 0x60ec3830, 0x5cb420e0, 0x5842dd54,
  0x539b2af0, 0x4ebfe8a5, 0x49b41533, 0x447acd50,
  0x3f1749b8, 0x398cdd32, 0x33def287, 0x2e110a62,
  0x2826b928, 0x2223a4c5, 0x1c0b826a, 0x15e21445,
  0x0fab272b, 0x096a9049, 0x03242abf, 0x7ffd885a,
 #endif
 #if (FCT_MAX_LOGN >= 6) /* 1024 bytes */
  0x7fe9cbc0, 0x7fc25596, 0x7f872bf3, 0x7f3857f6,
  0x7ed5e5c6, 0x7e5fe493, 0x7dd6668f, 0x7d3980ec,
  0x7c894bde, 0x7bc5e290, 0x7aef6323, 0x7a05eead,
  0x7909a92d, 0x77fab989, 0x76d94989, 0x75a585cf,
  0x745f9dd1, 0x7307c3d0, 0x719e2cd2, 0x7023109a,
  0x6e96a99d, 0x6cf934fc, 0x6b4af279, 0x698c246c,
  0x67bd0fbd, 0x65ddfbd3, 0x63ef3290, 0x61f1003f,
  0x5fe3b38d, 0x5dc79d7c, 0x5b9d1154, 0x59646498,
  0x571deefa, 0x54ca0a4b, 0x5269126e, 0x4ffb654d,
  0x4d8162c4, 0x4afb6c98, 0x4869e665, 0x45cd358f,
  0x4325c135, 0x4073f21d, 0x3db832a6, 0x3af2eeb7,
  0x382493b0, 0x354d9057, 0x326e54c7, 0x2f875262,
  0x2c98fbba, 0x29a3c485, 0x26a82186, 0x23a6887f,
  0x209f701c, 0x1d934fe5, 0x1a82a026, 0x176dd9de,
  0x145576b1, 0x1139f0cf, 0x0e1bc2e4, 0x0afb6805,
  0x07d95b9e, 0x04b6195d, 0x01921d20, 0x7fff6216,
 #endif
 #if (FCT_MAX_LOGN >= 7) /* 2048 bytes */
  0x7ffa72d1, 0x7ff09478, 0x7fe1c76b, 0x7fce0c3e,
  0x7fb563b3, 0x7f97cebd, 0x7f754e80, 0x7f4de451,
  0x7f2191b4, 0x7ef05860, 0x7eba3a39, 0x7e7f3957,
  0x7e3f57ff, 0x7dfa98a8, 0x7db0fdf8, 0x7d628ac6,
  0x7d0f4218, 0x7cb72724, 0x7c5a3d50, 0x7bf88830,
  0x7b920b89, 0x7b26cb4f, 0x7ab6cba4, 0x7a4210d8,
  0x79c89f6e, 0x794a7c12, 0x78c7aba2, 0x78403329,
  0x77b417df, 0x77235f2d, 0x768e0ea6, 0x75f42c0b,
  0x7555bd4c, 0x74b2c884, 0x740b53fb, 0x735f6626,
  0x72af05a7, 0x71fa3949, 0x71410805, 0x708378ff,
  0x6fc19385, 0x6efb5f12, 0x6e30e34a, 0x6d6227fa,
  0x6c8f351c, 0x6bb812d1, 0x6adcc964, 0x69fd614a,
  0x6919e320, 0x683257ab, 0x6746c7d8, 0x66573cbb,
  0x6563bf92, 0x646c59bf, 0x637114cc, 0x6271fa69,
  0x616f146c, 0x60686ccf, 0x5f5e0db3, 0x5e50015d,
  0x5d3e5237, 0x5c290acc, 0x5b1035cf, 0x59f3de12,
  0x58d40e8c, 0x57b0d256, 0x568a34a9, 0x556040e2,
  0x5433027d, 0x53028518, 0x51ced46e, 0x5097fc5e,
  0x4f5e08e3, 0x4e210617, 0x4ce10034, 0x4b9e0390,
  0x4a581c9e, 0x490f57ee, 0x47c3c22f, 0x46756828,
  0x452456bd, 0x43d09aed, 0x427a41d0, 0x4121589b,
  0x3fc5ec98, 0x3e680b2c, 0x3d07c1d6, 0x3ba51e29,
  0x3a402dd2, 0x38d8fe93, 0x376f9e46, 0x36041ad9,
  0x34968250, 0x3326e2c3, 0x31b54a5e, 0x3041c761,
  0x2ecc681e, 0x2d553afc, 0x2bdc4e6f, 0x2a61b101,
  0x28e5714b, 0x27679df4, 0x25e845b6, 0x24677758,
  0x22e541af, 0x2161b3a0, 0x1fdcdc1b, 0x1e56ca1e,
  0x1ccf8cb3, 0x1b4732ef, 0x19bdcbf3, 0x183366e9,
  0x16a81305, 0x151bdf86, 0x138edbb1, 0x120116d5,
  0x1072a048, 0x0ee38766, 0x0d53db92, 0x0bc3ac35,
  0x0a3308bd, 0x08a2009a, 0x0710a345, 0x057f0035,
  0x03ed26e6, 0x025b26d7, 0x00c90f88, 0x7fffd886,
 #endif
 #if (FCT_MAX_LOGN >= 8) /* 4096 bytes */
  0x7ffe9cb2, 0x7ffc250f, 0x7ff871a2, 0x7ff38274,
  0x7fed5791, 0x7fe5f108, 0x7fdd4eec, 0x7fd37153,
  0x7fc85854, 0x7fbc040a, 0x7fae7495, 0x7f9faa15,
  0x7f8fa4b0, 0x7f7e648c, 0x7f6be9d4, 0x7f5834b7,
  0x7f434563, 0x7f2d1c0e, 0x7f15b8ee, 0x7efd1c3c,
  0x7ee34636, 0x7ec8371a, 0x7eabef2c, 0x7e8e6eb2,
  0x7e6fb5f4, 0x7e4fc53e, 0x7e2e9cdf, 0x7e0c3d29,
  0x7de8a670, 0x7dc3d90d, 0x7d9dd55a, 0x7d769bb5,
  0x7d4e2c7f, 0x7d24881b, 0x7cf9aef0, 0x7ccda169,
  0x7ca05ff1, 0x7c71eaf9, 0x7c4242f2, 0x7c116853,
  0x7bdf5b94, 0x7bac1d31, 0x7b77ada8, 0x7b420d7a,
  0x7b0b3d2c, 0x7ad33d45, 0x7a9a0e50, 0x7a5fb0d8,
  0x7a24256f, 0x79e76ca7, 0x79a98715, 0x796a7554,
  0x792a37fe, 0x78e8cfb2, 0x78a63d11, 0x786280bf,
  0x781d9b65, 0x77d78daa, 0x7790583e, 0x7747fbce,
  0x76fe790e, 0x76b3d0b4, 0x76680376, 0x761b1211,
  0x75ccfd42, 0x757dc5ca, 0x752d6c6c, 0x74dbf1ef,
  0x7489571c, 0x74359cbd, 0x73e0c3a3, 0x738acc9e,
  0x7333b883, 0x72db8828, 0x72823c67, 0x7227d61c,
  0x71cc5626, 0x716fbd68, 0x71120cc5, 0x70b34525,
  0x70536771, 0x6ff27497, 0x6f906d84, 0x6f2d532c,
  0x6ec92683, 0x6e63e87f, 0x6dfd9a1c, 0x6d963c54,
  0x6d2dd027, 0x6cc45698, 0x6c59d0a9, 0x6bee3f62,
  0x6b81a3cd, 0x6b13fef5, 0x6aa551e9, 0x6a359db9,
  0x69c4e37a, 0x69532442, 0x68e06129, 0x686c9b4b,
  0x67f7d3c5, 0x67820bb7, 0x670b4444, 0x66937e91,
  0x661abbc5, 0x65a0fd0b, 0x6526438f, 0x64aa907f,
  0x642de50d, 0x63b0426d, 0x6331a9d4, 0x62b21c7b,
  0x62319b9d, 0x61b02876, 0x612dc447, 0x60aa7050,
  0x60262dd6, 0x5fa0fe1f, 0x5f1ae274, 0x5e93dc1f,
  0x5e0bec6e, 0x5d8314b1, 0x5cf95638, 0x5c6eb258,
  0x5be32a67, 0x5b56bfbd, 0x5ac973b5, 0x5a3b47ab,
  0x59ac3cfd, 0x591c550e, 0x588b9140, 0x57f9f2f8,
  0x57677b9d, 0x56d42c99, 0x56400758, 0x55ab0d46,
  0x55153fd4, 0x547ea073, 0x53e73097, 0x534ef1b5,
  0x52b5e546, 0x521c0cc2, 0x518169a5, 0x50e5fd6d,
  0x5049c999, 0x4faccfab, 0x4f0f1126, 0x4e708f8f,
  0x4dd14c6e, 0x4d31494b, 0x4c9087b1, 0x4bef092d,
  0x4b4ccf4d, 0x4aa9dba2, 0x4a062fbd, 0x4961cd33,
  0x48bcb599, 0x4816ea86, 0x47706d93, 0x46c9405c,
  0x4621647d, 0x4578db93, 0x44cfa740, 0x4425c923,
  0x437b42e1, 0x42d0161e, 0x42244481, 0x4177cfb1,
  0x40cab958, 0x401d0321, 0x3f6eaeb8, 0x3ebfbdcd,
  0x3e10320d, 0x3d600d2c, 0x3caf50da, 0x3bfdfecd,
  0x3b4c18ba, 0x3a99a057, 0x39e6975e, 0x3932ff87,
  0x387eda8e, 0x37ca2a30, 0x3714f02a, 0x365f2e3b,
  0x35a8e625, 0x34f219a8, 0x343aca87, 0x3382fa88,
  0x32caab6f, 0x3211df04, 0x3158970e, 0x309ed556,
  0x2fe49ba7, 0x2f29ebcc, 0x2e6ec792, 0x2db330c7,
  0x2cf72939, 0x2c3ab2b9, 0x2b7dcf17, 0x2ac08026,
  0x2a02c7b8, 0x2944a7a2, 0x288621b9, 0x27c737d3,
  0x2707ebc7, 0x26483f6c, 0x2588349d, 0x24c7cd33,
  0x24070b08, 0x2345eff8, 0x22847de0, 0x21c2b69c,
  0x21009c0c, 0x203e300d, 0x1f7b7481, 0x1eb86b46,
  0x1df5163f, 0x1d31774d, 0x1c6d9053, 0x1ba96335,
  0x1ae4f1d6, 0x1a203e1b, 0x195b49ea, 0x18961728,
  0x17d0a7bc, 0x170afd8d, 0x16451a83, 0x157f0086,
  0x14b8b17f, 0x13f22f58, 0x132b7bf9, 0x1264994e,
  0x119d8941, 0x10d64dbd, 0x100ee8ad, 0x0f475bff,
  0x0e7fa99e, 0x0db7d376, 0x0cefdb76, 0x0c27c389,
  0x0b5f8d9f, 0x0a973ba5, 0x09cecf89, 0x09064b3a,
  0x083db0a7, 0x077501be, 0x06ac406f, 0x05e36ea9,
  0x051a8e5c, 0x0451a177, 0x0388a9ea, 0x02bfa9a4,
  0x01f6a297, 0x012d96b1, 0x006487e3, 0x7ffff621,
 #endif
 #if (FCT_MAX_LOGN >= 9) /* 8192 bytes */
  0x7fffa72c, 0x7fff0943, 0x7ffe1c65, 0x7ffce093,
  0x7ffb55ce, 0x7ff97c18, 0x7ff75370, 0x7ff4dbd9,
  0x7ff21553, 0x7feeffe1, 0x7feb9b85, 0x7fe7e841,
  0x7fe3e616, 0x7fdf9508, 0x7fdaf519, 0x7fd6064c,
  0x7fd0c8a3, 0x7fcb3c23, 0x7fc560cf, 0x7fbf36aa,
  0x7fb8bdb8, 0x7fb1f5fc, 0x7faadf7c, 0x7fa37a3c,
  0x7f9bc640, 0x7f93c38c, 0x7f8b7227, 0x7f82d214,
  0x7f79e35a, 0x7f70a5fe, 0x7f671a05, 0x7f5d3f75,
  0x7f531655, 0x7f489eaa, 0x7f3dd87c, 0x7f32c3d1,
  0x7f2760af, 0x7f1baf1e, 0x7f0faf25, 0x7f0360cb,
  0x7ef6c418, 0x7ee9d914, 0x7edc9fc6, 0x7ecf1837,
  0x7ec14270, 0x7eb31e78, 0x7ea4ac58, 0x7e95ec1a,
  0x7e86ddc6, 0x7e778166, 0x7e67d703, 0x7e57dea7,
  0x7e47985b, 0x7e37042a, 0x7e26221f, 0x7e14f242,
  0x7e0374a0, 0x7df1a942, 0x7ddf9034, 0x7dcd2981,
  0x7dba7534, 0x7da77359, 0x7d9423fc, 0x7d808728,
  0x7d6c9ce9, 0x7d58654d, 0x7d43e05e, 0x7d2f0e2b,
  0x7d19eebf, 0x7d048228, 0x7ceec873, 0x7cd8c1ae,
  0x7cc26de5, 0x7cabcd28, 0x7c94df83, 0x7c7da505,
  0x7c661dbc, 0x7c4e49b7, 0x7c362904, 0x7c1dbbb3,
  0x7c0501d2, 0x7bebfb70, 0x7bd2a89e, 0x7bb9096b,
  0x7b9f1de6, 0x7b84e61f, 0x7b6a6227, 0x7b4f920e,
  0x7b3475e5, 0x7b190dbc, 0x7afd59a4, 0x7ae159ae,
  0x7ac50dec, 0x7aa8766f, 0x7a8b9348, 0x7a6e648a,
  0x7a50ea47, 0x7a332490, 0x7a151378, 0x79f6b711,
  0x79d80f6f, 0x79b91ca4, 0x7999dec4, 0x797a55e0,
  0x795a820e, 0x793a6361, 0x7919f9ec, 0x78f945c3,
  0x78d846fb, 0x78b6fda8, 0x789569df, 0x78738bb3,
  0x7851633b, 0x782ef08b, 0x780c33b8, 0x77e92cd9,
  0x77c5dc01, 0x77a24148, 0x777e5cc3, 0x775a2e89,
  0x7735b6af, 0x7710f54c, 0x76ebea77, 0x76c69647,
  0x76a0f8d2, 0x767b1231, 0x7654e279, 0x762e69c4,
  0x7607a828, 0x75e09dbd, 0x75b94a9c, 0x7591aedd,
  0x7569ca99, 0x75419de7, 0x751928e0, 0x74f06b9e,
  0x74c7663a, 0x749e18cd, 0x74748371, 0x744aa63f,
  0x74208150, 0x73f614c0, 0x73cb60a8, 0x73a06522,
  0x73752249, 0x73499838, 0x731dc70a, 0x72f1aed9,
  0x72c54fc1, 0x7298a9dd, 0x726bbd48, 0x723e8a20,
  0x7211107e, 0x71e35080, 0x71b54a41, 0x7186fdde,
  0x71586b74, 0x7129931f, 0x70fa74fc, 0x70cb1128,
  0x709b67c0, 0x706b78e3, 0x703b44ad, 0x700acb3c,
  0x6fda0cae, 0x6fa90921, 0x6f77c0b3, 0x6f463383,
  0x6f1461b0, 0x6ee24b57, 0x6eaff099, 0x6e7d5193,
  0x6e4a6e66, 0x6e174730, 0x6de3dc11, 0x6db02d29,
  0x6d7c3a98, 0x6d48047e, 0x6d138afb, 0x6cdece2f,
  0x6ca9ce3b, 0x6c748b3f, 0x6c3f055d, 0x6c093cb6,
  0x6bd3316a, 0x6b9ce39b, 0x6b66536b, 0x6b2f80fb,
  0x6af86c6c, 0x6ac115e2, 0x6a897d7d, 0x6a51a361,
  0x6a1987b0, 0x69e12a8c, 0x69a88c19, 0x696fac78,
  0x69368bce, 0x68fd2a3d, 0x68c387e9, 0x6889a4f6,
  0x684f8186, 0x68151dbe, 0x67da79c3, 0x679f95b7,
  0x676471c0, 0x67290e02, 0x66ed6aa1, 0x66b187c3,
  0x6675658c, 0x66390422, 0x65fc63a9, 0x65bf8447,
  0x65826622, 0x6545095f, 0x65076e25, 0x64c99498,
  0x648b7ce0, 0x644d2722, 0x640e9386, 0x63cfc231,
  0x6390b34a, 0x635166f9, 0x6311dd64, 0x62d216b3,
  0x6292130c, 0x6251d298, 0x6211557e, 0x61d09be5,
  0x618fa5f7, 0x614e73da, 0x610d05b7, 0x60cb5bb7,
  0x60897601, 0x604754bf, 0x6004f819, 0x5fc26038,
  0x5f7f8d46, 0x5f3c7f6b, 0x5ef936d1, 0x5eb5b3a2,
  0x5e71f606, 0x5e2dfe29, 0x5de9cc33, 0x5da5604f,
  0x5d60baa7, 0x5d1bdb65, 0x5cd6c2b5, 0x5c9170bf,
  0x5c4be5b0, 0x5c0621b2, 0x5bc024f0, 0x5b79ef96,
  0x5b3381ce, 0x5aecdbc5, 0x5aa5fda5, 0x5a5ee79a,
  0x5a1799d1, 0x59d01475, 0x598857b2, 0x594063b5,
  0x58f838a9, 0x58afd6bd, 0x58673e1b, 0x581e6ef1,
  0x57d5696d, 0x578c2dba, 0x5742bc06, 0x56f9147e,
  0x56af3750, 0x566524aa, 0x561adcb9, 0x55d05faa,
  0x5585adad, 0x553ac6ee, 0x54efab9c, 0x54a45be6,
  0x5458d7f9, 0x540d2005, 0x53c13439, 0x537514c2,
  0x5328c1d0, 0x52dc3b92, 0x528f8238, 0x524295f0,
  0x51f576ea, 0x51a82555, 0x515aa162, 0x510ceb40,
  0x50bf031f, 0x5070e92f, 0x50229da1, 0x4fd420a4,
  0x4f857269, 0x4f369320, 0x4ee782fb, 0x4e984229,
  0x4e48d0dd, 0x4df92f46, 0x4da95d96, 0x4d595bfe,
  0x4d092ab0, 0x4cb8c9dd, 0x4c6839b7, 0x4c177a6e,
  0x4bc68c36, 0x4b756f40, 0x4b2423be, 0x4ad2a9e2,
  0x4a8101de, 0x4a2f2be6, 0x49dd282a, 0x498af6df,
  0x49389836, 0x48e60c62, 0x48935397, 0x48406e08,
  0x47ed5be6, 0x479a1d67, 0x4746b2bc, 0x46f31c1a,
  0x469f59b4, 0x464b6bbe, 0x45f7526b, 0x45a30df0,
  0x454e9e80, 0x44fa0450, 0x44a53f93, 0x4450507e,
  0x43fb3746, 0x43a5f41e, 0x4350873c, 0x42faf0d4,
  0x42a5311b, 0x424f4845, 0x41f93689, 0x41a2fc1a,
  0x414c992f, 0x40f60dfb, 0x409f5ab6, 0x40487f94,
  0x3ff17cca, 0x3f9a5290, 0x3f430119, 0x3eeb889c,
  0x3e93e950, 0x3e3c2369, 0x3de4371f, 0x3d8c24a8,
  0x3d33ec39, 0x3cdb8e09, 0x3c830a50, 0x3c2a6142,
  0x3bd19318, 0x3b78a007, 0x3b1f8848, 0x3ac64c0f,
  0x3a6ceb96, 0x3a136712, 0x39b9bebc, 0x395ff2c9,
  0x39060373, 0x38abf0ef, 0x3851bb77, 0x37f76341,
  0x379ce885, 0x37424b7b, 0x36e78c5b, 0x368cab5c,
  0x3631a8b8, 0x35d684a6, 0x357b3f5d, 0x351fd918,
  0x34c4520d, 0x3468aa76, 0x340ce28b, 0x33b0fa84,
  0x3354f29b, 0x32f8cb07, 0x329c8402, 0x32401dc6,
  0x31e39889, 0x3186f487, 0x312a31f8, 0x30cd5115,
  0x30705217, 0x30133539, 0x2fb5fab2, 0x2f58a2be,
  0x2efb2d95, 0x2e9d9b70, 0x2e3fec8b, 0x2de2211e,
  0x2d843964, 0x2d263596, 0x2cc815ee, 0x2c69daa6,
  0x2c0b83fa, 0x2bad1221, 0x2b4e8558, 0x2aefddd8,
  0x2a911bdc, 0x2a323f9e, 0x29d34958, 0x29743946,
  0x29150fa1, 0x28b5cca5, 0x2856708d, 0x27f6fb92,
  0x27976df1, 0x2737c7e3, 0x26d809a5, 0x26783370,
  0x26184581, 0x25b84012, 0x2558235f, 0x24f7efa2,
  0x2497a517, 0x243743fa, 0x23d6cc87, 0x23763ef7,
  0x23159b88, 0x22b4e274, 0x225413f8, 0x21f3304f,
  0x219237b5, 0x21312a65, 0x20d0089c, 0x206ed295,
  0x200d888d, 0x1fac2abf, 0x1f4ab968, 0x1ee934c3,
  0x1e879d0d, 0x1e25f282, 0x1dc4355e, 0x1d6265dd,
  0x1d00843d, 0x1c9e90b8, 0x1c3c8b8c, 0x1bda74f6,
  0x1b784d30, 0x1b161479, 0x1ab3cb0d, 0x1a517128,
  0x19ef0707, 0x198c8ce7, 0x192a0304, 0x18c7699b,
  0x1864c0ea, 0x1802092c, 0x179f429f, 0x173c6d80,
  0x16d98a0c, 0x1676987f, 0x16139918, 0x15b08c12,
  0x154d71aa, 0x14ea4a1f, 0x148715ae, 0x1423d492,
  0x13c0870a, 0x135d2d53, 0x12f9c7aa, 0x1296564d,
  0x1232d979, 0x11cf516a, 0x116bbe60, 0x11082096,
  0x10a4784b, 0x1040c5bb, 0x0fdd0926, 0x0f7942c7,
  0x0f1572dc, 0x0eb199a4, 0x0e4db75b, 0x0de9cc40,
  0x0d85d88f, 0x0d21dc87, 0x0cbdd865, 0x0c59cc68,
  0x0bf5b8cb, 0x0b919dcf, 0x0b2d7baf, 0x0ac952aa,
  0x0a6522fe, 0x0a00ece8, 0x099cb0a7, 0x09386e78,
  0x08d42699, 0x086fd947, 0x080b86c2, 0x07a72f45,
  0x0742d311, 0x06de7262, 0x067a0d76, 0x0615a48b,
  0x05b137df, 0x054cc7b1, 0x04e8543e, 0x0483ddc3,
  0x041f6480, 0x03bae8b2, 0x03566a96, 0x02f1ea6c,
  0x028d6870, 0x0228e4e2, 0x01c45ffe, 0x015fda03,
  0x00fb5330, 0x0096cbc1, 0x003243f5, 0x7ffffd88,
 #endif
}; /* fct_twf */
