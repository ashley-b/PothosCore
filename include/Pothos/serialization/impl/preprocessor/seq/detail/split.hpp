# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef POTHOS_PREPROCESSOR_SEQ_DETAIL_SPLIT_HPP
# define POTHOS_PREPROCESSOR_SEQ_DETAIL_SPLIT_HPP
#
# include <Pothos/serialization/impl/preprocessor/config/config.hpp>
#
# /* POTHOS_PP_SEQ_SPLIT */
#
# define POTHOS_PP_SEQ_SPLIT(n, seq) POTHOS_PP_SEQ_SPLIT_D(n, seq)
#
# if ~POTHOS_PP_CONFIG_FLAGS() & POTHOS_PP_CONFIG_MWCC()
#    define POTHOS_PP_SEQ_SPLIT_D(n, seq) (POTHOS_PP_SEQ_SPLIT_ ## n seq)
# else
#    define POTHOS_PP_SEQ_SPLIT_D(n, seq) (POTHOS_PP_SEQ_SPLIT_ ## n ## seq)
# endif
#
# define POTHOS_PP_SEQ_SPLIT_1(x) (x),
# define POTHOS_PP_SEQ_SPLIT_2(x) (x) POTHOS_PP_SEQ_SPLIT_1
# define POTHOS_PP_SEQ_SPLIT_3(x) (x) POTHOS_PP_SEQ_SPLIT_2
# define POTHOS_PP_SEQ_SPLIT_4(x) (x) POTHOS_PP_SEQ_SPLIT_3
# define POTHOS_PP_SEQ_SPLIT_5(x) (x) POTHOS_PP_SEQ_SPLIT_4
# define POTHOS_PP_SEQ_SPLIT_6(x) (x) POTHOS_PP_SEQ_SPLIT_5
# define POTHOS_PP_SEQ_SPLIT_7(x) (x) POTHOS_PP_SEQ_SPLIT_6
# define POTHOS_PP_SEQ_SPLIT_8(x) (x) POTHOS_PP_SEQ_SPLIT_7
# define POTHOS_PP_SEQ_SPLIT_9(x) (x) POTHOS_PP_SEQ_SPLIT_8
# define POTHOS_PP_SEQ_SPLIT_10(x) (x) POTHOS_PP_SEQ_SPLIT_9
# define POTHOS_PP_SEQ_SPLIT_11(x) (x) POTHOS_PP_SEQ_SPLIT_10
# define POTHOS_PP_SEQ_SPLIT_12(x) (x) POTHOS_PP_SEQ_SPLIT_11
# define POTHOS_PP_SEQ_SPLIT_13(x) (x) POTHOS_PP_SEQ_SPLIT_12
# define POTHOS_PP_SEQ_SPLIT_14(x) (x) POTHOS_PP_SEQ_SPLIT_13
# define POTHOS_PP_SEQ_SPLIT_15(x) (x) POTHOS_PP_SEQ_SPLIT_14
# define POTHOS_PP_SEQ_SPLIT_16(x) (x) POTHOS_PP_SEQ_SPLIT_15
# define POTHOS_PP_SEQ_SPLIT_17(x) (x) POTHOS_PP_SEQ_SPLIT_16
# define POTHOS_PP_SEQ_SPLIT_18(x) (x) POTHOS_PP_SEQ_SPLIT_17
# define POTHOS_PP_SEQ_SPLIT_19(x) (x) POTHOS_PP_SEQ_SPLIT_18
# define POTHOS_PP_SEQ_SPLIT_20(x) (x) POTHOS_PP_SEQ_SPLIT_19
# define POTHOS_PP_SEQ_SPLIT_21(x) (x) POTHOS_PP_SEQ_SPLIT_20
# define POTHOS_PP_SEQ_SPLIT_22(x) (x) POTHOS_PP_SEQ_SPLIT_21
# define POTHOS_PP_SEQ_SPLIT_23(x) (x) POTHOS_PP_SEQ_SPLIT_22
# define POTHOS_PP_SEQ_SPLIT_24(x) (x) POTHOS_PP_SEQ_SPLIT_23
# define POTHOS_PP_SEQ_SPLIT_25(x) (x) POTHOS_PP_SEQ_SPLIT_24
# define POTHOS_PP_SEQ_SPLIT_26(x) (x) POTHOS_PP_SEQ_SPLIT_25
# define POTHOS_PP_SEQ_SPLIT_27(x) (x) POTHOS_PP_SEQ_SPLIT_26
# define POTHOS_PP_SEQ_SPLIT_28(x) (x) POTHOS_PP_SEQ_SPLIT_27
# define POTHOS_PP_SEQ_SPLIT_29(x) (x) POTHOS_PP_SEQ_SPLIT_28
# define POTHOS_PP_SEQ_SPLIT_30(x) (x) POTHOS_PP_SEQ_SPLIT_29
# define POTHOS_PP_SEQ_SPLIT_31(x) (x) POTHOS_PP_SEQ_SPLIT_30
# define POTHOS_PP_SEQ_SPLIT_32(x) (x) POTHOS_PP_SEQ_SPLIT_31
# define POTHOS_PP_SEQ_SPLIT_33(x) (x) POTHOS_PP_SEQ_SPLIT_32
# define POTHOS_PP_SEQ_SPLIT_34(x) (x) POTHOS_PP_SEQ_SPLIT_33
# define POTHOS_PP_SEQ_SPLIT_35(x) (x) POTHOS_PP_SEQ_SPLIT_34
# define POTHOS_PP_SEQ_SPLIT_36(x) (x) POTHOS_PP_SEQ_SPLIT_35
# define POTHOS_PP_SEQ_SPLIT_37(x) (x) POTHOS_PP_SEQ_SPLIT_36
# define POTHOS_PP_SEQ_SPLIT_38(x) (x) POTHOS_PP_SEQ_SPLIT_37
# define POTHOS_PP_SEQ_SPLIT_39(x) (x) POTHOS_PP_SEQ_SPLIT_38
# define POTHOS_PP_SEQ_SPLIT_40(x) (x) POTHOS_PP_SEQ_SPLIT_39
# define POTHOS_PP_SEQ_SPLIT_41(x) (x) POTHOS_PP_SEQ_SPLIT_40
# define POTHOS_PP_SEQ_SPLIT_42(x) (x) POTHOS_PP_SEQ_SPLIT_41
# define POTHOS_PP_SEQ_SPLIT_43(x) (x) POTHOS_PP_SEQ_SPLIT_42
# define POTHOS_PP_SEQ_SPLIT_44(x) (x) POTHOS_PP_SEQ_SPLIT_43
# define POTHOS_PP_SEQ_SPLIT_45(x) (x) POTHOS_PP_SEQ_SPLIT_44
# define POTHOS_PP_SEQ_SPLIT_46(x) (x) POTHOS_PP_SEQ_SPLIT_45
# define POTHOS_PP_SEQ_SPLIT_47(x) (x) POTHOS_PP_SEQ_SPLIT_46
# define POTHOS_PP_SEQ_SPLIT_48(x) (x) POTHOS_PP_SEQ_SPLIT_47
# define POTHOS_PP_SEQ_SPLIT_49(x) (x) POTHOS_PP_SEQ_SPLIT_48
# define POTHOS_PP_SEQ_SPLIT_50(x) (x) POTHOS_PP_SEQ_SPLIT_49
# define POTHOS_PP_SEQ_SPLIT_51(x) (x) POTHOS_PP_SEQ_SPLIT_50
# define POTHOS_PP_SEQ_SPLIT_52(x) (x) POTHOS_PP_SEQ_SPLIT_51
# define POTHOS_PP_SEQ_SPLIT_53(x) (x) POTHOS_PP_SEQ_SPLIT_52
# define POTHOS_PP_SEQ_SPLIT_54(x) (x) POTHOS_PP_SEQ_SPLIT_53
# define POTHOS_PP_SEQ_SPLIT_55(x) (x) POTHOS_PP_SEQ_SPLIT_54
# define POTHOS_PP_SEQ_SPLIT_56(x) (x) POTHOS_PP_SEQ_SPLIT_55
# define POTHOS_PP_SEQ_SPLIT_57(x) (x) POTHOS_PP_SEQ_SPLIT_56
# define POTHOS_PP_SEQ_SPLIT_58(x) (x) POTHOS_PP_SEQ_SPLIT_57
# define POTHOS_PP_SEQ_SPLIT_59(x) (x) POTHOS_PP_SEQ_SPLIT_58
# define POTHOS_PP_SEQ_SPLIT_60(x) (x) POTHOS_PP_SEQ_SPLIT_59
# define POTHOS_PP_SEQ_SPLIT_61(x) (x) POTHOS_PP_SEQ_SPLIT_60
# define POTHOS_PP_SEQ_SPLIT_62(x) (x) POTHOS_PP_SEQ_SPLIT_61
# define POTHOS_PP_SEQ_SPLIT_63(x) (x) POTHOS_PP_SEQ_SPLIT_62
# define POTHOS_PP_SEQ_SPLIT_64(x) (x) POTHOS_PP_SEQ_SPLIT_63
# define POTHOS_PP_SEQ_SPLIT_65(x) (x) POTHOS_PP_SEQ_SPLIT_64
# define POTHOS_PP_SEQ_SPLIT_66(x) (x) POTHOS_PP_SEQ_SPLIT_65
# define POTHOS_PP_SEQ_SPLIT_67(x) (x) POTHOS_PP_SEQ_SPLIT_66
# define POTHOS_PP_SEQ_SPLIT_68(x) (x) POTHOS_PP_SEQ_SPLIT_67
# define POTHOS_PP_SEQ_SPLIT_69(x) (x) POTHOS_PP_SEQ_SPLIT_68
# define POTHOS_PP_SEQ_SPLIT_70(x) (x) POTHOS_PP_SEQ_SPLIT_69
# define POTHOS_PP_SEQ_SPLIT_71(x) (x) POTHOS_PP_SEQ_SPLIT_70
# define POTHOS_PP_SEQ_SPLIT_72(x) (x) POTHOS_PP_SEQ_SPLIT_71
# define POTHOS_PP_SEQ_SPLIT_73(x) (x) POTHOS_PP_SEQ_SPLIT_72
# define POTHOS_PP_SEQ_SPLIT_74(x) (x) POTHOS_PP_SEQ_SPLIT_73
# define POTHOS_PP_SEQ_SPLIT_75(x) (x) POTHOS_PP_SEQ_SPLIT_74
# define POTHOS_PP_SEQ_SPLIT_76(x) (x) POTHOS_PP_SEQ_SPLIT_75
# define POTHOS_PP_SEQ_SPLIT_77(x) (x) POTHOS_PP_SEQ_SPLIT_76
# define POTHOS_PP_SEQ_SPLIT_78(x) (x) POTHOS_PP_SEQ_SPLIT_77
# define POTHOS_PP_SEQ_SPLIT_79(x) (x) POTHOS_PP_SEQ_SPLIT_78
# define POTHOS_PP_SEQ_SPLIT_80(x) (x) POTHOS_PP_SEQ_SPLIT_79
# define POTHOS_PP_SEQ_SPLIT_81(x) (x) POTHOS_PP_SEQ_SPLIT_80
# define POTHOS_PP_SEQ_SPLIT_82(x) (x) POTHOS_PP_SEQ_SPLIT_81
# define POTHOS_PP_SEQ_SPLIT_83(x) (x) POTHOS_PP_SEQ_SPLIT_82
# define POTHOS_PP_SEQ_SPLIT_84(x) (x) POTHOS_PP_SEQ_SPLIT_83
# define POTHOS_PP_SEQ_SPLIT_85(x) (x) POTHOS_PP_SEQ_SPLIT_84
# define POTHOS_PP_SEQ_SPLIT_86(x) (x) POTHOS_PP_SEQ_SPLIT_85
# define POTHOS_PP_SEQ_SPLIT_87(x) (x) POTHOS_PP_SEQ_SPLIT_86
# define POTHOS_PP_SEQ_SPLIT_88(x) (x) POTHOS_PP_SEQ_SPLIT_87
# define POTHOS_PP_SEQ_SPLIT_89(x) (x) POTHOS_PP_SEQ_SPLIT_88
# define POTHOS_PP_SEQ_SPLIT_90(x) (x) POTHOS_PP_SEQ_SPLIT_89
# define POTHOS_PP_SEQ_SPLIT_91(x) (x) POTHOS_PP_SEQ_SPLIT_90
# define POTHOS_PP_SEQ_SPLIT_92(x) (x) POTHOS_PP_SEQ_SPLIT_91
# define POTHOS_PP_SEQ_SPLIT_93(x) (x) POTHOS_PP_SEQ_SPLIT_92
# define POTHOS_PP_SEQ_SPLIT_94(x) (x) POTHOS_PP_SEQ_SPLIT_93
# define POTHOS_PP_SEQ_SPLIT_95(x) (x) POTHOS_PP_SEQ_SPLIT_94
# define POTHOS_PP_SEQ_SPLIT_96(x) (x) POTHOS_PP_SEQ_SPLIT_95
# define POTHOS_PP_SEQ_SPLIT_97(x) (x) POTHOS_PP_SEQ_SPLIT_96
# define POTHOS_PP_SEQ_SPLIT_98(x) (x) POTHOS_PP_SEQ_SPLIT_97
# define POTHOS_PP_SEQ_SPLIT_99(x) (x) POTHOS_PP_SEQ_SPLIT_98
# define POTHOS_PP_SEQ_SPLIT_100(x) (x) POTHOS_PP_SEQ_SPLIT_99
# define POTHOS_PP_SEQ_SPLIT_101(x) (x) POTHOS_PP_SEQ_SPLIT_100
# define POTHOS_PP_SEQ_SPLIT_102(x) (x) POTHOS_PP_SEQ_SPLIT_101
# define POTHOS_PP_SEQ_SPLIT_103(x) (x) POTHOS_PP_SEQ_SPLIT_102
# define POTHOS_PP_SEQ_SPLIT_104(x) (x) POTHOS_PP_SEQ_SPLIT_103
# define POTHOS_PP_SEQ_SPLIT_105(x) (x) POTHOS_PP_SEQ_SPLIT_104
# define POTHOS_PP_SEQ_SPLIT_106(x) (x) POTHOS_PP_SEQ_SPLIT_105
# define POTHOS_PP_SEQ_SPLIT_107(x) (x) POTHOS_PP_SEQ_SPLIT_106
# define POTHOS_PP_SEQ_SPLIT_108(x) (x) POTHOS_PP_SEQ_SPLIT_107
# define POTHOS_PP_SEQ_SPLIT_109(x) (x) POTHOS_PP_SEQ_SPLIT_108
# define POTHOS_PP_SEQ_SPLIT_110(x) (x) POTHOS_PP_SEQ_SPLIT_109
# define POTHOS_PP_SEQ_SPLIT_111(x) (x) POTHOS_PP_SEQ_SPLIT_110
# define POTHOS_PP_SEQ_SPLIT_112(x) (x) POTHOS_PP_SEQ_SPLIT_111
# define POTHOS_PP_SEQ_SPLIT_113(x) (x) POTHOS_PP_SEQ_SPLIT_112
# define POTHOS_PP_SEQ_SPLIT_114(x) (x) POTHOS_PP_SEQ_SPLIT_113
# define POTHOS_PP_SEQ_SPLIT_115(x) (x) POTHOS_PP_SEQ_SPLIT_114
# define POTHOS_PP_SEQ_SPLIT_116(x) (x) POTHOS_PP_SEQ_SPLIT_115
# define POTHOS_PP_SEQ_SPLIT_117(x) (x) POTHOS_PP_SEQ_SPLIT_116
# define POTHOS_PP_SEQ_SPLIT_118(x) (x) POTHOS_PP_SEQ_SPLIT_117
# define POTHOS_PP_SEQ_SPLIT_119(x) (x) POTHOS_PP_SEQ_SPLIT_118
# define POTHOS_PP_SEQ_SPLIT_120(x) (x) POTHOS_PP_SEQ_SPLIT_119
# define POTHOS_PP_SEQ_SPLIT_121(x) (x) POTHOS_PP_SEQ_SPLIT_120
# define POTHOS_PP_SEQ_SPLIT_122(x) (x) POTHOS_PP_SEQ_SPLIT_121
# define POTHOS_PP_SEQ_SPLIT_123(x) (x) POTHOS_PP_SEQ_SPLIT_122
# define POTHOS_PP_SEQ_SPLIT_124(x) (x) POTHOS_PP_SEQ_SPLIT_123
# define POTHOS_PP_SEQ_SPLIT_125(x) (x) POTHOS_PP_SEQ_SPLIT_124
# define POTHOS_PP_SEQ_SPLIT_126(x) (x) POTHOS_PP_SEQ_SPLIT_125
# define POTHOS_PP_SEQ_SPLIT_127(x) (x) POTHOS_PP_SEQ_SPLIT_126
# define POTHOS_PP_SEQ_SPLIT_128(x) (x) POTHOS_PP_SEQ_SPLIT_127
# define POTHOS_PP_SEQ_SPLIT_129(x) (x) POTHOS_PP_SEQ_SPLIT_128
# define POTHOS_PP_SEQ_SPLIT_130(x) (x) POTHOS_PP_SEQ_SPLIT_129
# define POTHOS_PP_SEQ_SPLIT_131(x) (x) POTHOS_PP_SEQ_SPLIT_130
# define POTHOS_PP_SEQ_SPLIT_132(x) (x) POTHOS_PP_SEQ_SPLIT_131
# define POTHOS_PP_SEQ_SPLIT_133(x) (x) POTHOS_PP_SEQ_SPLIT_132
# define POTHOS_PP_SEQ_SPLIT_134(x) (x) POTHOS_PP_SEQ_SPLIT_133
# define POTHOS_PP_SEQ_SPLIT_135(x) (x) POTHOS_PP_SEQ_SPLIT_134
# define POTHOS_PP_SEQ_SPLIT_136(x) (x) POTHOS_PP_SEQ_SPLIT_135
# define POTHOS_PP_SEQ_SPLIT_137(x) (x) POTHOS_PP_SEQ_SPLIT_136
# define POTHOS_PP_SEQ_SPLIT_138(x) (x) POTHOS_PP_SEQ_SPLIT_137
# define POTHOS_PP_SEQ_SPLIT_139(x) (x) POTHOS_PP_SEQ_SPLIT_138
# define POTHOS_PP_SEQ_SPLIT_140(x) (x) POTHOS_PP_SEQ_SPLIT_139
# define POTHOS_PP_SEQ_SPLIT_141(x) (x) POTHOS_PP_SEQ_SPLIT_140
# define POTHOS_PP_SEQ_SPLIT_142(x) (x) POTHOS_PP_SEQ_SPLIT_141
# define POTHOS_PP_SEQ_SPLIT_143(x) (x) POTHOS_PP_SEQ_SPLIT_142
# define POTHOS_PP_SEQ_SPLIT_144(x) (x) POTHOS_PP_SEQ_SPLIT_143
# define POTHOS_PP_SEQ_SPLIT_145(x) (x) POTHOS_PP_SEQ_SPLIT_144
# define POTHOS_PP_SEQ_SPLIT_146(x) (x) POTHOS_PP_SEQ_SPLIT_145
# define POTHOS_PP_SEQ_SPLIT_147(x) (x) POTHOS_PP_SEQ_SPLIT_146
# define POTHOS_PP_SEQ_SPLIT_148(x) (x) POTHOS_PP_SEQ_SPLIT_147
# define POTHOS_PP_SEQ_SPLIT_149(x) (x) POTHOS_PP_SEQ_SPLIT_148
# define POTHOS_PP_SEQ_SPLIT_150(x) (x) POTHOS_PP_SEQ_SPLIT_149
# define POTHOS_PP_SEQ_SPLIT_151(x) (x) POTHOS_PP_SEQ_SPLIT_150
# define POTHOS_PP_SEQ_SPLIT_152(x) (x) POTHOS_PP_SEQ_SPLIT_151
# define POTHOS_PP_SEQ_SPLIT_153(x) (x) POTHOS_PP_SEQ_SPLIT_152
# define POTHOS_PP_SEQ_SPLIT_154(x) (x) POTHOS_PP_SEQ_SPLIT_153
# define POTHOS_PP_SEQ_SPLIT_155(x) (x) POTHOS_PP_SEQ_SPLIT_154
# define POTHOS_PP_SEQ_SPLIT_156(x) (x) POTHOS_PP_SEQ_SPLIT_155
# define POTHOS_PP_SEQ_SPLIT_157(x) (x) POTHOS_PP_SEQ_SPLIT_156
# define POTHOS_PP_SEQ_SPLIT_158(x) (x) POTHOS_PP_SEQ_SPLIT_157
# define POTHOS_PP_SEQ_SPLIT_159(x) (x) POTHOS_PP_SEQ_SPLIT_158
# define POTHOS_PP_SEQ_SPLIT_160(x) (x) POTHOS_PP_SEQ_SPLIT_159
# define POTHOS_PP_SEQ_SPLIT_161(x) (x) POTHOS_PP_SEQ_SPLIT_160
# define POTHOS_PP_SEQ_SPLIT_162(x) (x) POTHOS_PP_SEQ_SPLIT_161
# define POTHOS_PP_SEQ_SPLIT_163(x) (x) POTHOS_PP_SEQ_SPLIT_162
# define POTHOS_PP_SEQ_SPLIT_164(x) (x) POTHOS_PP_SEQ_SPLIT_163
# define POTHOS_PP_SEQ_SPLIT_165(x) (x) POTHOS_PP_SEQ_SPLIT_164
# define POTHOS_PP_SEQ_SPLIT_166(x) (x) POTHOS_PP_SEQ_SPLIT_165
# define POTHOS_PP_SEQ_SPLIT_167(x) (x) POTHOS_PP_SEQ_SPLIT_166
# define POTHOS_PP_SEQ_SPLIT_168(x) (x) POTHOS_PP_SEQ_SPLIT_167
# define POTHOS_PP_SEQ_SPLIT_169(x) (x) POTHOS_PP_SEQ_SPLIT_168
# define POTHOS_PP_SEQ_SPLIT_170(x) (x) POTHOS_PP_SEQ_SPLIT_169
# define POTHOS_PP_SEQ_SPLIT_171(x) (x) POTHOS_PP_SEQ_SPLIT_170
# define POTHOS_PP_SEQ_SPLIT_172(x) (x) POTHOS_PP_SEQ_SPLIT_171
# define POTHOS_PP_SEQ_SPLIT_173(x) (x) POTHOS_PP_SEQ_SPLIT_172
# define POTHOS_PP_SEQ_SPLIT_174(x) (x) POTHOS_PP_SEQ_SPLIT_173
# define POTHOS_PP_SEQ_SPLIT_175(x) (x) POTHOS_PP_SEQ_SPLIT_174
# define POTHOS_PP_SEQ_SPLIT_176(x) (x) POTHOS_PP_SEQ_SPLIT_175
# define POTHOS_PP_SEQ_SPLIT_177(x) (x) POTHOS_PP_SEQ_SPLIT_176
# define POTHOS_PP_SEQ_SPLIT_178(x) (x) POTHOS_PP_SEQ_SPLIT_177
# define POTHOS_PP_SEQ_SPLIT_179(x) (x) POTHOS_PP_SEQ_SPLIT_178
# define POTHOS_PP_SEQ_SPLIT_180(x) (x) POTHOS_PP_SEQ_SPLIT_179
# define POTHOS_PP_SEQ_SPLIT_181(x) (x) POTHOS_PP_SEQ_SPLIT_180
# define POTHOS_PP_SEQ_SPLIT_182(x) (x) POTHOS_PP_SEQ_SPLIT_181
# define POTHOS_PP_SEQ_SPLIT_183(x) (x) POTHOS_PP_SEQ_SPLIT_182
# define POTHOS_PP_SEQ_SPLIT_184(x) (x) POTHOS_PP_SEQ_SPLIT_183
# define POTHOS_PP_SEQ_SPLIT_185(x) (x) POTHOS_PP_SEQ_SPLIT_184
# define POTHOS_PP_SEQ_SPLIT_186(x) (x) POTHOS_PP_SEQ_SPLIT_185
# define POTHOS_PP_SEQ_SPLIT_187(x) (x) POTHOS_PP_SEQ_SPLIT_186
# define POTHOS_PP_SEQ_SPLIT_188(x) (x) POTHOS_PP_SEQ_SPLIT_187
# define POTHOS_PP_SEQ_SPLIT_189(x) (x) POTHOS_PP_SEQ_SPLIT_188
# define POTHOS_PP_SEQ_SPLIT_190(x) (x) POTHOS_PP_SEQ_SPLIT_189
# define POTHOS_PP_SEQ_SPLIT_191(x) (x) POTHOS_PP_SEQ_SPLIT_190
# define POTHOS_PP_SEQ_SPLIT_192(x) (x) POTHOS_PP_SEQ_SPLIT_191
# define POTHOS_PP_SEQ_SPLIT_193(x) (x) POTHOS_PP_SEQ_SPLIT_192
# define POTHOS_PP_SEQ_SPLIT_194(x) (x) POTHOS_PP_SEQ_SPLIT_193
# define POTHOS_PP_SEQ_SPLIT_195(x) (x) POTHOS_PP_SEQ_SPLIT_194
# define POTHOS_PP_SEQ_SPLIT_196(x) (x) POTHOS_PP_SEQ_SPLIT_195
# define POTHOS_PP_SEQ_SPLIT_197(x) (x) POTHOS_PP_SEQ_SPLIT_196
# define POTHOS_PP_SEQ_SPLIT_198(x) (x) POTHOS_PP_SEQ_SPLIT_197
# define POTHOS_PP_SEQ_SPLIT_199(x) (x) POTHOS_PP_SEQ_SPLIT_198
# define POTHOS_PP_SEQ_SPLIT_200(x) (x) POTHOS_PP_SEQ_SPLIT_199
# define POTHOS_PP_SEQ_SPLIT_201(x) (x) POTHOS_PP_SEQ_SPLIT_200
# define POTHOS_PP_SEQ_SPLIT_202(x) (x) POTHOS_PP_SEQ_SPLIT_201
# define POTHOS_PP_SEQ_SPLIT_203(x) (x) POTHOS_PP_SEQ_SPLIT_202
# define POTHOS_PP_SEQ_SPLIT_204(x) (x) POTHOS_PP_SEQ_SPLIT_203
# define POTHOS_PP_SEQ_SPLIT_205(x) (x) POTHOS_PP_SEQ_SPLIT_204
# define POTHOS_PP_SEQ_SPLIT_206(x) (x) POTHOS_PP_SEQ_SPLIT_205
# define POTHOS_PP_SEQ_SPLIT_207(x) (x) POTHOS_PP_SEQ_SPLIT_206
# define POTHOS_PP_SEQ_SPLIT_208(x) (x) POTHOS_PP_SEQ_SPLIT_207
# define POTHOS_PP_SEQ_SPLIT_209(x) (x) POTHOS_PP_SEQ_SPLIT_208
# define POTHOS_PP_SEQ_SPLIT_210(x) (x) POTHOS_PP_SEQ_SPLIT_209
# define POTHOS_PP_SEQ_SPLIT_211(x) (x) POTHOS_PP_SEQ_SPLIT_210
# define POTHOS_PP_SEQ_SPLIT_212(x) (x) POTHOS_PP_SEQ_SPLIT_211
# define POTHOS_PP_SEQ_SPLIT_213(x) (x) POTHOS_PP_SEQ_SPLIT_212
# define POTHOS_PP_SEQ_SPLIT_214(x) (x) POTHOS_PP_SEQ_SPLIT_213
# define POTHOS_PP_SEQ_SPLIT_215(x) (x) POTHOS_PP_SEQ_SPLIT_214
# define POTHOS_PP_SEQ_SPLIT_216(x) (x) POTHOS_PP_SEQ_SPLIT_215
# define POTHOS_PP_SEQ_SPLIT_217(x) (x) POTHOS_PP_SEQ_SPLIT_216
# define POTHOS_PP_SEQ_SPLIT_218(x) (x) POTHOS_PP_SEQ_SPLIT_217
# define POTHOS_PP_SEQ_SPLIT_219(x) (x) POTHOS_PP_SEQ_SPLIT_218
# define POTHOS_PP_SEQ_SPLIT_220(x) (x) POTHOS_PP_SEQ_SPLIT_219
# define POTHOS_PP_SEQ_SPLIT_221(x) (x) POTHOS_PP_SEQ_SPLIT_220
# define POTHOS_PP_SEQ_SPLIT_222(x) (x) POTHOS_PP_SEQ_SPLIT_221
# define POTHOS_PP_SEQ_SPLIT_223(x) (x) POTHOS_PP_SEQ_SPLIT_222
# define POTHOS_PP_SEQ_SPLIT_224(x) (x) POTHOS_PP_SEQ_SPLIT_223
# define POTHOS_PP_SEQ_SPLIT_225(x) (x) POTHOS_PP_SEQ_SPLIT_224
# define POTHOS_PP_SEQ_SPLIT_226(x) (x) POTHOS_PP_SEQ_SPLIT_225
# define POTHOS_PP_SEQ_SPLIT_227(x) (x) POTHOS_PP_SEQ_SPLIT_226
# define POTHOS_PP_SEQ_SPLIT_228(x) (x) POTHOS_PP_SEQ_SPLIT_227
# define POTHOS_PP_SEQ_SPLIT_229(x) (x) POTHOS_PP_SEQ_SPLIT_228
# define POTHOS_PP_SEQ_SPLIT_230(x) (x) POTHOS_PP_SEQ_SPLIT_229
# define POTHOS_PP_SEQ_SPLIT_231(x) (x) POTHOS_PP_SEQ_SPLIT_230
# define POTHOS_PP_SEQ_SPLIT_232(x) (x) POTHOS_PP_SEQ_SPLIT_231
# define POTHOS_PP_SEQ_SPLIT_233(x) (x) POTHOS_PP_SEQ_SPLIT_232
# define POTHOS_PP_SEQ_SPLIT_234(x) (x) POTHOS_PP_SEQ_SPLIT_233
# define POTHOS_PP_SEQ_SPLIT_235(x) (x) POTHOS_PP_SEQ_SPLIT_234
# define POTHOS_PP_SEQ_SPLIT_236(x) (x) POTHOS_PP_SEQ_SPLIT_235
# define POTHOS_PP_SEQ_SPLIT_237(x) (x) POTHOS_PP_SEQ_SPLIT_236
# define POTHOS_PP_SEQ_SPLIT_238(x) (x) POTHOS_PP_SEQ_SPLIT_237
# define POTHOS_PP_SEQ_SPLIT_239(x) (x) POTHOS_PP_SEQ_SPLIT_238
# define POTHOS_PP_SEQ_SPLIT_240(x) (x) POTHOS_PP_SEQ_SPLIT_239
# define POTHOS_PP_SEQ_SPLIT_241(x) (x) POTHOS_PP_SEQ_SPLIT_240
# define POTHOS_PP_SEQ_SPLIT_242(x) (x) POTHOS_PP_SEQ_SPLIT_241
# define POTHOS_PP_SEQ_SPLIT_243(x) (x) POTHOS_PP_SEQ_SPLIT_242
# define POTHOS_PP_SEQ_SPLIT_244(x) (x) POTHOS_PP_SEQ_SPLIT_243
# define POTHOS_PP_SEQ_SPLIT_245(x) (x) POTHOS_PP_SEQ_SPLIT_244
# define POTHOS_PP_SEQ_SPLIT_246(x) (x) POTHOS_PP_SEQ_SPLIT_245
# define POTHOS_PP_SEQ_SPLIT_247(x) (x) POTHOS_PP_SEQ_SPLIT_246
# define POTHOS_PP_SEQ_SPLIT_248(x) (x) POTHOS_PP_SEQ_SPLIT_247
# define POTHOS_PP_SEQ_SPLIT_249(x) (x) POTHOS_PP_SEQ_SPLIT_248
# define POTHOS_PP_SEQ_SPLIT_250(x) (x) POTHOS_PP_SEQ_SPLIT_249
# define POTHOS_PP_SEQ_SPLIT_251(x) (x) POTHOS_PP_SEQ_SPLIT_250
# define POTHOS_PP_SEQ_SPLIT_252(x) (x) POTHOS_PP_SEQ_SPLIT_251
# define POTHOS_PP_SEQ_SPLIT_253(x) (x) POTHOS_PP_SEQ_SPLIT_252
# define POTHOS_PP_SEQ_SPLIT_254(x) (x) POTHOS_PP_SEQ_SPLIT_253
# define POTHOS_PP_SEQ_SPLIT_255(x) (x) POTHOS_PP_SEQ_SPLIT_254
# define POTHOS_PP_SEQ_SPLIT_256(x) (x) POTHOS_PP_SEQ_SPLIT_255
#
# endif
