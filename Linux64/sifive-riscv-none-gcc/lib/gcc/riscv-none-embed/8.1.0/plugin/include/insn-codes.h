/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,
  CODE_FOR_addsf3 = 1,
  CODE_FOR_adddf3 = 2,
  CODE_FOR_addsi3 = 3,
  CODE_FOR_adddi3 = 4,
  CODE_FOR_subsf3 = 7,
  CODE_FOR_subdf3 = 8,
  CODE_FOR_subdi3 = 9,
  CODE_FOR_subsi3 = 10,
  CODE_FOR_mulsf3 = 13,
  CODE_FOR_muldf3 = 14,
  CODE_FOR_mulsi3 = 15,
  CODE_FOR_muldi3 = 16,
  CODE_FOR_muldi3_highpart = 19,
  CODE_FOR_umuldi3_highpart = 20,
  CODE_FOR_usmuldi3_highpart = 21,
  CODE_FOR_mulsi3_highpart = 22,
  CODE_FOR_umulsi3_highpart = 23,
  CODE_FOR_usmulsi3_highpart = 24,
  CODE_FOR_divsi3 = 25,
  CODE_FOR_udivsi3 = 26,
  CODE_FOR_modsi3 = 27,
  CODE_FOR_umodsi3 = 28,
  CODE_FOR_divdi3 = 29,
  CODE_FOR_udivdi3 = 30,
  CODE_FOR_moddi3 = 31,
  CODE_FOR_umoddi3 = 32,
  CODE_FOR_divsf3 = 37,
  CODE_FOR_divdf3 = 38,
  CODE_FOR_sqrtsf2 = 39,
  CODE_FOR_sqrtdf2 = 40,
  CODE_FOR_fmasf4 = 41,
  CODE_FOR_fmadf4 = 42,
  CODE_FOR_fmssf4 = 43,
  CODE_FOR_fmsdf4 = 44,
  CODE_FOR_fnmssf4 = 45,
  CODE_FOR_fnmsdf4 = 46,
  CODE_FOR_fnmasf4 = 47,
  CODE_FOR_fnmadf4 = 48,
  CODE_FOR_abssf2 = 57,
  CODE_FOR_absdf2 = 58,
  CODE_FOR_copysignsf3 = 59,
  CODE_FOR_copysigndf3 = 60,
  CODE_FOR_negsf2 = 61,
  CODE_FOR_negdf2 = 62,
  CODE_FOR_sminsf3 = 63,
  CODE_FOR_smindf3 = 64,
  CODE_FOR_smaxsf3 = 65,
  CODE_FOR_smaxdf3 = 66,
  CODE_FOR_andsi3 = 67,
  CODE_FOR_iorsi3 = 68,
  CODE_FOR_xorsi3 = 69,
  CODE_FOR_anddi3 = 70,
  CODE_FOR_iordi3 = 71,
  CODE_FOR_xordi3 = 72,
  CODE_FOR_one_cmplsi2 = 76,
  CODE_FOR_one_cmpldi2 = 77,
  CODE_FOR_truncdfsf2 = 79,
  CODE_FOR_zero_extendsidi2 = 80,
  CODE_FOR_zero_extendhisi2 = 81,
  CODE_FOR_zero_extendhidi2 = 82,
  CODE_FOR_zero_extendqihi2 = 83,
  CODE_FOR_zero_extendqisi2 = 84,
  CODE_FOR_zero_extendqidi2 = 85,
  CODE_FOR_extendsidi2 = 86,
  CODE_FOR_extendqihi2 = 87,
  CODE_FOR_extendqisi2 = 88,
  CODE_FOR_extendqidi2 = 89,
  CODE_FOR_extendhihi2 = 90,
  CODE_FOR_extendhisi2 = 91,
  CODE_FOR_extendhidi2 = 92,
  CODE_FOR_extendsfdf2 = 93,
  CODE_FOR_fix_truncsfsi2 = 94,
  CODE_FOR_fix_truncsfdi2 = 95,
  CODE_FOR_fix_truncdfsi2 = 96,
  CODE_FOR_fix_truncdfdi2 = 97,
  CODE_FOR_fixuns_truncsfsi2 = 98,
  CODE_FOR_fixuns_truncsfdi2 = 99,
  CODE_FOR_fixuns_truncdfsi2 = 100,
  CODE_FOR_fixuns_truncdfdi2 = 101,
  CODE_FOR_floatsisf2 = 102,
  CODE_FOR_floatdisf2 = 103,
  CODE_FOR_floatsidf2 = 104,
  CODE_FOR_floatdidf2 = 105,
  CODE_FOR_floatunssisf2 = 106,
  CODE_FOR_floatunsdisf2 = 107,
  CODE_FOR_floatunssidf2 = 108,
  CODE_FOR_floatunsdidf2 = 109,
  CODE_FOR_lrintsfsi2 = 110,
  CODE_FOR_lroundsfsi2 = 111,
  CODE_FOR_lrintsfdi2 = 112,
  CODE_FOR_lroundsfdi2 = 113,
  CODE_FOR_lrintdfsi2 = 114,
  CODE_FOR_lrounddfsi2 = 115,
  CODE_FOR_lrintdfdi2 = 116,
  CODE_FOR_lrounddfdi2 = 117,
  CODE_FOR_got_loadsi = 118,
  CODE_FOR_got_loaddi = 119,
  CODE_FOR_tls_add_tp_lesi = 120,
  CODE_FOR_tls_add_tp_ledi = 121,
  CODE_FOR_got_load_tls_gdsi = 122,
  CODE_FOR_got_load_tls_gddi = 123,
  CODE_FOR_got_load_tls_iesi = 124,
  CODE_FOR_got_load_tls_iedi = 125,
  CODE_FOR_auipcsi = 126,
  CODE_FOR_auipcdi = 127,
  CODE_FOR_fence = 144,
  CODE_FOR_fence_i = 145,
  CODE_FOR_ashlsi3 = 146,
  CODE_FOR_ashrsi3 = 147,
  CODE_FOR_lshrsi3 = 148,
  CODE_FOR_ashldi3 = 155,
  CODE_FOR_ashrdi3 = 156,
  CODE_FOR_lshrdi3 = 157,
  CODE_FOR_flt_quietsfsi4 = 188,
  CODE_FOR_fle_quietsfsi4 = 189,
  CODE_FOR_flt_quietsfdi4 = 190,
  CODE_FOR_fle_quietsfdi4 = 191,
  CODE_FOR_flt_quietdfsi4 = 192,
  CODE_FOR_fle_quietdfsi4 = 193,
  CODE_FOR_flt_quietdfdi4 = 194,
  CODE_FOR_fle_quietdfdi4 = 195,
  CODE_FOR_jump = 226,
  CODE_FOR_indirect_jumpsi = 227,
  CODE_FOR_indirect_jumpdi = 228,
  CODE_FOR_tablejumpsi = 229,
  CODE_FOR_tablejumpdi = 230,
  CODE_FOR_blockage = 231,
  CODE_FOR_simple_return = 232,
  CODE_FOR_simple_return_internal = 233,
  CODE_FOR_eh_set_lr_si = 234,
  CODE_FOR_eh_set_lr_di = 235,
  CODE_FOR_eh_return_internal = 236,
  CODE_FOR_sibcall_internal = 237,
  CODE_FOR_sibcall_value_internal = 238,
  CODE_FOR_call_internal = 239,
  CODE_FOR_call_value_internal = 240,
  CODE_FOR_nop = 241,
  CODE_FOR_trap = 242,
  CODE_FOR_gpr_save = 243,
  CODE_FOR_gpr_restore = 244,
  CODE_FOR_gpr_restore_return = 245,
  CODE_FOR_riscv_frflags = 246,
  CODE_FOR_riscv_fsflags = 247,
  CODE_FOR_riscv_mret = 248,
  CODE_FOR_riscv_sret = 249,
  CODE_FOR_riscv_uret = 250,
  CODE_FOR_stack_tiesi = 251,
  CODE_FOR_stack_tiedi = 252,
  CODE_FOR_mem_thread_fence_1 = 253,
  CODE_FOR_atomic_storesi = 254,
  CODE_FOR_atomic_storedi = 255,
  CODE_FOR_atomic_addsi = 256,
  CODE_FOR_atomic_orsi = 257,
  CODE_FOR_atomic_xorsi = 258,
  CODE_FOR_atomic_andsi = 259,
  CODE_FOR_atomic_adddi = 260,
  CODE_FOR_atomic_ordi = 261,
  CODE_FOR_atomic_xordi = 262,
  CODE_FOR_atomic_anddi = 263,
  CODE_FOR_atomic_fetch_addsi = 264,
  CODE_FOR_atomic_fetch_orsi = 265,
  CODE_FOR_atomic_fetch_xorsi = 266,
  CODE_FOR_atomic_fetch_andsi = 267,
  CODE_FOR_atomic_fetch_adddi = 268,
  CODE_FOR_atomic_fetch_ordi = 269,
  CODE_FOR_atomic_fetch_xordi = 270,
  CODE_FOR_atomic_fetch_anddi = 271,
  CODE_FOR_atomic_exchangesi = 272,
  CODE_FOR_atomic_exchangedi = 273,
  CODE_FOR_atomic_cas_value_strongsi = 274,
  CODE_FOR_atomic_cas_value_strongdi = 275,
  CODE_FOR_mulditi3 = 308,
  CODE_FOR_umulditi3 = 309,
  CODE_FOR_usmulditi3 = 310,
  CODE_FOR_mulsidi3 = 311,
  CODE_FOR_umulsidi3 = 312,
  CODE_FOR_usmulsidi3 = 313,
  CODE_FOR_movdi = 314,
  CODE_FOR_movsi = 315,
  CODE_FOR_movhi = 316,
  CODE_FOR_movqi = 317,
  CODE_FOR_movsf = 318,
  CODE_FOR_movdf = 319,
  CODE_FOR_movmemsi = 320,
  CODE_FOR_clear_cache = 321,
  CODE_FOR_condjump = 322,
  CODE_FOR_cbranchqi4 = 323,
  CODE_FOR_cbranchsi4 = 324,
  CODE_FOR_cbranchdi4 = 325,
  CODE_FOR_cbranchsf4 = 326,
  CODE_FOR_cbranchdf4 = 327,
  CODE_FOR_cstoresi4 = 328,
  CODE_FOR_cstoredi4 = 329,
  CODE_FOR_cstoresf4 = 330,
  CODE_FOR_cstoredf4 = 331,
  CODE_FOR_indirect_jump = 332,
  CODE_FOR_tablejump = 333,
  CODE_FOR_prologue = 334,
  CODE_FOR_epilogue = 335,
  CODE_FOR_sibcall_epilogue = 336,
  CODE_FOR_return = 337,
  CODE_FOR_eh_return = 338,
  CODE_FOR_sibcall = 339,
  CODE_FOR_sibcall_value = 340,
  CODE_FOR_call = 341,
  CODE_FOR_call_value = 342,
  CODE_FOR_untyped_call = 343,
  CODE_FOR_mem_thread_fence = 344,
  CODE_FOR_atomic_compare_and_swapsi = 345,
  CODE_FOR_atomic_compare_and_swapdi = 346,
  CODE_FOR_atomic_test_and_set = 347
};

const unsigned int NUM_INSN_CODES = 348;
#endif /* GCC_INSN_CODES_H */
