#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//
//   fxc /Zpc /Tvs_4_0_level_9_3 /EVS /Fh
//    Shader/EffekseerRenderer.ModelRenderer.ShaderTexture_VS.h
//    Shader/model_renderer_texture_VS.fx
//
//
// Buffer Definitions: 
//
// cbuffer $Globals
// {
//
//   float4x4 mCameraProj;              // Offset:    0 Size:    64
//   float4x4 mModel;                   // Offset:   64 Size:    64
//   float4 fUV;                        // Offset:  128 Size:    16
//   float4 fModelColor;                // Offset:  144 Size:    16
//   float4 mUVInversed;                // Offset:  208 Size:    16
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// $Globals                          cbuffer      NA          NA    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// POSITION                 0   xyz         0     NONE  float   xyz 
// NORMAL                   0   xyz         1     NONE  float       
// NORMAL                   1   xyz         2     NONE  float       
// NORMAL                   2   xyz         3     NONE  float       
// TEXCOORD                 0   xy          4     NONE  float   xy  
// NORMAL                   3   xyzw        5     NONE  float   xyzw
// BLENDINDICES             0   xyzw        6     NONE   uint       
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_POSITION              0   xyzw        0      POS  float   xyzw
// TEXCOORD                 0   xy          1     NONE  float   xy  
// TEXCOORD                 1   xyz         2     NONE  float   xyz 
// TEXCOORD                 2   xyz         3     NONE  float   xyz 
// TEXCOORD                 3   xyz         4     NONE  float   xyz 
// COLOR                    0   xyzw        5     NONE  float   xyzw
//
//
// Constant buffer to DX9 shader constant mappings:
//
// Target Reg Buffer  Start Reg # of Regs        Data Conversion
// ---------- ------- --------- --------- ----------------------
// c1         cb0             0        10  ( FLT, FLT, FLT, FLT)
// c11        cb0            13         1  ( FLT, FLT, FLT, FLT)
//
//
// Runtime generated constant mappings:
//
// Target Reg                               Constant Description
// ---------- --------------------------------------------------
// c0                              Vertex Shader position offset
//
//
// Level9 shader bytecode:
//
    vs_2_x
    def c12, 0, 0, 0, 0
    dcl_texcoord v0
    dcl_texcoord4 v4
    dcl_texcoord5 v5
    mul oT4, v5, c10
    mad oT0.x, v4.x, c9.z, c9.x
    mad r0.x, v4.y, c9.w, c9.y
    mad oT0.y, c11.y, r0.x, c11.x
    mul r0, v0.y, c6
    mad r0, c5, v0.x, r0
    mad r0, c7, v0.z, r0
    add r0, r0, c8
    mul r1, r0.y, c2
    mad r1, c1, r0.x, r1
    mad r1, c3, r0.z, r1
    mad r0, c4, r0.w, r1
    mad oPos.xy, r0.w, c0, r0
    mov oPos.zw, r0
    mov oT1.xyz, c12.x
    mov oT2.xyz, c12.x
    mov oT3.xyz, c12.x

// approximately 17 instruction slots used
vs_4_0
dcl_constantbuffer cb0[14], immediateIndexed
dcl_input v0.xyz
dcl_input v4.xy
dcl_input v5.xyzw
dcl_output_siv o0.xyzw, position
dcl_output o1.xy
dcl_output o2.xyz
dcl_output o3.xyz
dcl_output o4.xyz
dcl_output o5.xyzw
dcl_temps 2
mul r0.xyzw, v0.yyyy, cb0[5].xyzw
mad r0.xyzw, cb0[4].xyzw, v0.xxxx, r0.xyzw
mad r0.xyzw, cb0[6].xyzw, v0.zzzz, r0.xyzw
add r0.xyzw, r0.xyzw, cb0[7].xyzw
mul r1.xyzw, r0.yyyy, cb0[1].xyzw
mad r1.xyzw, cb0[0].xyzw, r0.xxxx, r1.xyzw
mad r1.xyzw, cb0[2].xyzw, r0.zzzz, r1.xyzw
mad o0.xyzw, cb0[3].xyzw, r0.wwww, r1.xyzw
mad r0.x, v4.y, cb0[8].w, cb0[8].y
mad o1.y, cb0[13].y, r0.x, cb0[13].x
mad o1.x, v4.x, cb0[8].z, cb0[8].x
mov o2.xyz, l(0,0,0,0)
mov o3.xyz, l(0,0,0,0)
mov o4.xyz, l(0,0,0,0)
mul o5.xyzw, v5.xyzw, cb0[9].xyzw
ret 
// Approximately 16 instruction slots used
#endif

const BYTE g_VS[] =
{
     68,  88,  66,  67, 113,  52, 
     18, 231, 181, 153, 183,  50, 
    244, 186, 151,  11, 185,  95, 
     60, 161,   1,   0,   0,   0, 
     44,   8,   0,   0,   6,   0, 
      0,   0,  56,   0,   0,   0, 
    232,   1,   0,   0, 176,   4, 
      0,   0,  44,   5,   0,   0, 
    144,   6,   0,   0, 112,   7, 
      0,   0,  65, 111, 110,  57, 
    168,   1,   0,   0, 168,   1, 
      0,   0,   0,   2, 254, 255, 
    104,   1,   0,   0,  64,   0, 
      0,   0,   2,   0,  36,   0, 
      0,   0,  60,   0,   0,   0, 
     60,   0,   0,   0,  36,   0, 
      1,   0,  60,   0,   0,   0, 
      0,   0,  10,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     13,   0,   1,   0,  11,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   2, 254, 255, 
     81,   0,   0,   5,  12,   0, 
     15, 160,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     31,   0,   0,   2,   5,   0, 
      0, 128,   0,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      4, 128,   4,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      5, 128,   5,   0,  15, 144, 
      5,   0,   0,   3,   4,   0, 
     15, 224,   5,   0, 228, 144, 
     10,   0, 228, 160,   4,   0, 
      0,   4,   0,   0,   1, 224, 
      4,   0,   0, 144,   9,   0, 
    170, 160,   9,   0,   0, 160, 
      4,   0,   0,   4,   0,   0, 
      1, 128,   4,   0,  85, 144, 
      9,   0, 255, 160,   9,   0, 
     85, 160,   4,   0,   0,   4, 
      0,   0,   2, 224,  11,   0, 
     85, 160,   0,   0,   0, 128, 
     11,   0,   0, 160,   5,   0, 
      0,   3,   0,   0,  15, 128, 
      0,   0,  85, 144,   6,   0, 
    228, 160,   4,   0,   0,   4, 
      0,   0,  15, 128,   5,   0, 
    228, 160,   0,   0,   0, 144, 
      0,   0, 228, 128,   4,   0, 
      0,   4,   0,   0,  15, 128, 
      7,   0, 228, 160,   0,   0, 
    170, 144,   0,   0, 228, 128, 
      2,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 128, 
      8,   0, 228, 160,   5,   0, 
      0,   3,   1,   0,  15, 128, 
      0,   0,  85, 128,   2,   0, 
    228, 160,   4,   0,   0,   4, 
      1,   0,  15, 128,   1,   0, 
    228, 160,   0,   0,   0, 128, 
      1,   0, 228, 128,   4,   0, 
      0,   4,   1,   0,  15, 128, 
      3,   0, 228, 160,   0,   0, 
    170, 128,   1,   0, 228, 128, 
      4,   0,   0,   4,   0,   0, 
     15, 128,   4,   0, 228, 160, 
      0,   0, 255, 128,   1,   0, 
    228, 128,   4,   0,   0,   4, 
      0,   0,   3, 192,   0,   0, 
    255, 128,   0,   0, 228, 160, 
      0,   0, 228, 128,   1,   0, 
      0,   2,   0,   0,  12, 192, 
      0,   0, 228, 128,   1,   0, 
      0,   2,   1,   0,   7, 224, 
     12,   0,   0, 160,   1,   0, 
      0,   2,   2,   0,   7, 224, 
     12,   0,   0, 160,   1,   0, 
      0,   2,   3,   0,   7, 224, 
     12,   0,   0, 160, 255, 255, 
      0,   0,  83,  72,  68,  82, 
    192,   2,   0,   0,  64,   0, 
      1,   0, 176,   0,   0,   0, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     14,   0,   0,   0,  95,   0, 
      0,   3, 114,  16,  16,   0, 
      0,   0,   0,   0,  95,   0, 
      0,   3,  50,  16,  16,   0, 
      4,   0,   0,   0,  95,   0, 
      0,   3, 242,  16,  16,   0, 
      5,   0,   0,   0, 103,   0, 
      0,   4, 242,  32,  16,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0, 101,   0,   0,   3, 
     50,  32,  16,   0,   1,   0, 
      0,   0, 101,   0,   0,   3, 
    114,  32,  16,   0,   2,   0, 
      0,   0, 101,   0,   0,   3, 
    114,  32,  16,   0,   3,   0, 
      0,   0, 101,   0,   0,   3, 
    114,  32,  16,   0,   4,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   5,   0, 
      0,   0, 104,   0,   0,   2, 
      2,   0,   0,   0,  56,   0, 
      0,   8, 242,   0,  16,   0, 
      0,   0,   0,   0,  86,  21, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   5,   0,   0,   0, 
     50,   0,   0,  10, 242,   0, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
      6,  16,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  50,   0, 
      0,  10, 242,   0,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      6,   0,   0,   0, 166,  26, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,   0,   0,   0,   8, 
    242,   0,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      7,   0,   0,   0,  56,   0, 
      0,   8, 242,   0,  16,   0, 
      1,   0,   0,   0,  86,   5, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     50,   0,   0,  10, 242,   0, 
     16,   0,   1,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      6,   0,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  10, 242,   0,  16,   0, 
      1,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      2,   0,   0,   0, 166,  10, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,  10, 
    242,  32,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     50,   0,   0,  11,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     26,  16,  16,   0,   4,   0, 
      0,   0,  58, 128,  32,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,  26, 128,  32,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,  50,   0,   0,  11, 
     34,  32,  16,   0,   1,   0, 
      0,   0,  26, 128,  32,   0, 
      0,   0,   0,   0,  13,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  10, 128, 
     32,   0,   0,   0,   0,   0, 
     13,   0,   0,   0,  50,   0, 
      0,  11,  18,  32,  16,   0, 
      1,   0,   0,   0,  10,  16, 
     16,   0,   4,   0,   0,   0, 
     42, 128,  32,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     10, 128,  32,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     54,   0,   0,   8, 114,  32, 
     16,   0,   2,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  54,   0,   0,   8, 
    114,  32,  16,   0,   3,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   8, 114,  32,  16,   0, 
      4,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     56,   0,   0,   8, 242,  32, 
     16,   0,   5,   0,   0,   0, 
     70,  30,  16,   0,   5,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,   9,   0, 
      0,   0,  62,   0,   0,   1, 
     83,  84,  65,  84, 116,   0, 
      0,   0,  16,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   9,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  82,  68, 
     69,  70,  92,   1,   0,   0, 
      1,   0,   0,   0,  72,   0, 
      0,   0,   1,   0,   0,   0, 
     28,   0,   0,   0,   0,   4, 
    254, 255,  16,   1,   0,   0, 
     40,   1,   0,   0,  60,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     36,  71, 108, 111,  98,  97, 
    108, 115,   0, 171, 171, 171, 
     60,   0,   0,   0,   5,   0, 
      0,   0,  96,   0,   0,   0, 
    224,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    216,   0,   0,   0,   0,   0, 
      0,   0,  64,   0,   0,   0, 
      2,   0,   0,   0, 228,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   0,   0,   0,  64,   0, 
      0,   0,  64,   0,   0,   0, 
      2,   0,   0,   0, 228,   0, 
      0,   0,   0,   0,   0,   0, 
    251,   0,   0,   0, 128,   0, 
      0,   0,  16,   0,   0,   0, 
      2,   0,   0,   0,   0,   1, 
      0,   0,   0,   0,   0,   0, 
     16,   1,   0,   0, 144,   0, 
      0,   0,  16,   0,   0,   0, 
      2,   0,   0,   0,   0,   1, 
      0,   0,   0,   0,   0,   0, 
     28,   1,   0,   0, 208,   0, 
      0,   0,  16,   0,   0,   0, 
      2,   0,   0,   0,   0,   1, 
      0,   0,   0,   0,   0,   0, 
    109,  67,  97, 109, 101, 114, 
     97,  80, 114, 111, 106,   0, 
      3,   0,   3,   0,   4,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 109,  77, 
    111, 100, 101, 108,   0, 102, 
     85,  86,   0, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 102,  77, 111, 100, 
    101, 108,  67, 111, 108, 111, 
    114,   0, 109,  85,  86,  73, 
    110, 118, 101, 114, 115, 101, 
    100,   0,  77, 105,  99, 114, 
    111, 115, 111, 102, 116,  32, 
     40,  82,  41,  32,  72,  76, 
     83,  76,  32,  83, 104,  97, 
    100, 101, 114,  32,  67, 111, 
    109, 112, 105, 108, 101, 114, 
     32,  57,  46,  50,  57,  46, 
     57,  53,  50,  46,  51,  49, 
     49,  49,   0, 171, 171, 171, 
     73,  83,  71,  78, 216,   0, 
      0,   0,   7,   0,   0,   0, 
      8,   0,   0,   0, 176,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
      7,   7,   0,   0, 185,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      7,   0,   0,   0, 185,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
      7,   0,   0,   0, 185,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   3,   0,   0,   0, 
      7,   0,   0,   0, 192,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   4,   0,   0,   0, 
      3,   3,   0,   0, 185,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   5,   0,   0,   0, 
     15,  15,   0,   0, 201,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   6,   0,   0,   0, 
     15,   0,   0,   0,  80,  79, 
     83,  73,  84,  73,  79,  78, 
      0,  78,  79,  82,  77,  65, 
     76,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0,  66, 
     76,  69,  78,  68,  73,  78, 
     68,  73,  67,  69,  83,   0, 
    171, 171,  79,  83,  71,  78, 
    180,   0,   0,   0,   6,   0, 
      0,   0,   8,   0,   0,   0, 
    152,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
    164,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,   3,  12,   0,   0, 
    164,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   2,   0, 
      0,   0,   7,   8,   0,   0, 
    164,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   3,   0, 
      0,   0,   7,   8,   0,   0, 
    164,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   4,   0, 
      0,   0,   7,   8,   0,   0, 
    173,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   5,   0, 
      0,   0,  15,   0,   0,   0, 
     83,  86,  95,  80,  79,  83, 
     73,  84,  73,  79,  78,   0, 
     84,  69,  88,  67,  79,  79, 
     82,  68,   0,  67,  79,  76, 
     79,  82,   0, 171
};
