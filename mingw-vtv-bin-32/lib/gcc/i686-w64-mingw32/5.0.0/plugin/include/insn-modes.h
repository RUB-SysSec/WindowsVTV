/* Generated automatically from machmode.def and config/i386/i386-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  VOIDmode,                /* machmode.def:172 */
  BLKmode,                 /* machmode.def:176 */
  CCmode,                  /* machmode.def:207 */
  CCGCmode,                /* config/i386/i386-modes.def:61 */
  CCGOCmode,               /* config/i386/i386-modes.def:62 */
  CCNOmode,                /* config/i386/i386-modes.def:63 */
  CCAmode,                 /* config/i386/i386-modes.def:64 */
  CCCmode,                 /* config/i386/i386-modes.def:65 */
  CCOmode,                 /* config/i386/i386-modes.def:66 */
  CCSmode,                 /* config/i386/i386-modes.def:67 */
  CCZmode,                 /* config/i386/i386-modes.def:68 */
  CCFPmode,                /* config/i386/i386-modes.def:69 */
  CCFPUmode,               /* config/i386/i386-modes.def:70 */
  BImode,                  /* machmode.def:179 */
  QImode,                  /* machmode.def:187 */
  HImode,                  /* machmode.def:188 */
  SImode,                  /* machmode.def:189 */
  DImode,                  /* machmode.def:190 */
  TImode,                  /* machmode.def:191 */
  OImode,                  /* config/i386/i386-modes.def:90 */
  XImode,                  /* config/i386/i386-modes.def:91 */
  QQmode,                  /* machmode.def:210 */
  HQmode,                  /* machmode.def:211 */
  SQmode,                  /* machmode.def:212 */
  DQmode,                  /* machmode.def:213 */
  TQmode,                  /* machmode.def:214 */
  UQQmode,                 /* machmode.def:216 */
  UHQmode,                 /* machmode.def:217 */
  USQmode,                 /* machmode.def:218 */
  UDQmode,                 /* machmode.def:219 */
  UTQmode,                 /* machmode.def:220 */
  HAmode,                  /* machmode.def:222 */
  SAmode,                  /* machmode.def:223 */
  DAmode,                  /* machmode.def:224 */
  TAmode,                  /* machmode.def:225 */
  UHAmode,                 /* machmode.def:227 */
  USAmode,                 /* machmode.def:228 */
  UDAmode,                 /* machmode.def:229 */
  UTAmode,                 /* machmode.def:230 */
  SFmode,                  /* machmode.def:202 */
  DFmode,                  /* machmode.def:203 */
  XFmode,                  /* config/i386/i386-modes.def:24 */
  TFmode,                  /* config/i386/i386-modes.def:25 */
  SDmode,                  /* machmode.def:242 */
  DDmode,                  /* machmode.def:243 */
  TDmode,                  /* machmode.def:244 */
  CQImode,                 /* machmode.def:238 */
  CHImode,                 /* machmode.def:238 */
  CSImode,                 /* machmode.def:238 */
  CDImode,                 /* machmode.def:238 */
  CTImode,                 /* machmode.def:238 */
  COImode,                 /* machmode.def:238 */
  CXImode,                 /* machmode.def:238 */
  SCmode,                  /* machmode.def:239 */
  DCmode,                  /* machmode.def:239 */
  XCmode,                  /* machmode.def:239 */
  TCmode,                  /* machmode.def:239 */
  V2QImode,                /* config/i386/i386-modes.def:88 */
  V4QImode,                /* config/i386/i386-modes.def:74 */
  V2HImode,                /* config/i386/i386-modes.def:74 */
  V1SImode,                /* config/i386/i386-modes.def:87 */
  V8QImode,                /* config/i386/i386-modes.def:75 */
  V4HImode,                /* config/i386/i386-modes.def:75 */
  V2SImode,                /* config/i386/i386-modes.def:75 */
  V1DImode,                /* config/i386/i386-modes.def:86 */
  V16QImode,               /* config/i386/i386-modes.def:76 */
  V8HImode,                /* config/i386/i386-modes.def:76 */
  V4SImode,                /* config/i386/i386-modes.def:76 */
  V2DImode,                /* config/i386/i386-modes.def:76 */
  V1TImode,                /* config/i386/i386-modes.def:85 */
  V32QImode,               /* config/i386/i386-modes.def:77 */
  V16HImode,               /* config/i386/i386-modes.def:77 */
  V8SImode,                /* config/i386/i386-modes.def:77 */
  V4DImode,                /* config/i386/i386-modes.def:77 */
  V2TImode,                /* config/i386/i386-modes.def:77 */
  V64QImode,               /* config/i386/i386-modes.def:78 */
  V32HImode,               /* config/i386/i386-modes.def:78 */
  V16SImode,               /* config/i386/i386-modes.def:78 */
  V8DImode,                /* config/i386/i386-modes.def:78 */
  V4TImode,                /* config/i386/i386-modes.def:78 */
  V128QImode,              /* config/i386/i386-modes.def:79 */
  V64HImode,               /* config/i386/i386-modes.def:79 */
  V32SImode,               /* config/i386/i386-modes.def:79 */
  V16DImode,               /* config/i386/i386-modes.def:79 */
  V8TImode,                /* config/i386/i386-modes.def:79 */
  V2SFmode,                /* config/i386/i386-modes.def:80 */
  V4SFmode,                /* config/i386/i386-modes.def:81 */
  V2DFmode,                /* config/i386/i386-modes.def:81 */
  V8SFmode,                /* config/i386/i386-modes.def:82 */
  V4DFmode,                /* config/i386/i386-modes.def:82 */
  V2TFmode,                /* config/i386/i386-modes.def:82 */
  V16SFmode,               /* config/i386/i386-modes.def:83 */
  V8DFmode,                /* config/i386/i386-modes.def:83 */
  V4TFmode,                /* config/i386/i386-modes.def:83 */
  V32SFmode,               /* config/i386/i386-modes.def:84 */
  V16DFmode,               /* config/i386/i386-modes.def:84 */
  V8TFmode,                /* config/i386/i386-modes.def:84 */
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = VOIDmode,
  MAX_MODE_RANDOM = BLKmode,

  MIN_MODE_CC = CCmode,
  MAX_MODE_CC = CCFPUmode,

  MIN_MODE_INT = QImode,
  MAX_MODE_INT = XImode,

  MIN_MODE_PARTIAL_INT = VOIDmode,
  MAX_MODE_PARTIAL_INT = VOIDmode,

  MIN_MODE_FRACT = QQmode,
  MAX_MODE_FRACT = TQmode,

  MIN_MODE_UFRACT = UQQmode,
  MAX_MODE_UFRACT = UTQmode,

  MIN_MODE_ACCUM = HAmode,
  MAX_MODE_ACCUM = TAmode,

  MIN_MODE_UACCUM = UHAmode,
  MAX_MODE_UACCUM = UTAmode,

  MIN_MODE_FLOAT = SFmode,
  MAX_MODE_FLOAT = TFmode,

  MIN_MODE_DECIMAL_FLOAT = SDmode,
  MAX_MODE_DECIMAL_FLOAT = TDmode,

  MIN_MODE_COMPLEX_INT = CQImode,
  MAX_MODE_COMPLEX_INT = CXImode,

  MIN_MODE_COMPLEX_FLOAT = SCmode,
  MAX_MODE_COMPLEX_FLOAT = TCmode,

  MIN_MODE_VECTOR_INT = V2QImode,
  MAX_MODE_VECTOR_INT = V8TImode,

  MIN_MODE_VECTOR_FRACT = VOIDmode,
  MAX_MODE_VECTOR_FRACT = VOIDmode,

  MIN_MODE_VECTOR_UFRACT = VOIDmode,
  MAX_MODE_VECTOR_UFRACT = VOIDmode,

  MIN_MODE_VECTOR_ACCUM = VOIDmode,
  MAX_MODE_VECTOR_ACCUM = VOIDmode,

  MIN_MODE_VECTOR_UACCUM = VOIDmode,
  MAX_MODE_VECTOR_UACCUM = VOIDmode,

  MIN_MODE_VECTOR_FLOAT = V2SFmode,
  MAX_MODE_VECTOR_FLOAT = V8TFmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define CONST_MODE_SIZE
#define CONST_MODE_BASE_ALIGN
#define CONST_MODE_IBIT const
#define CONST_MODE_FBIT const

#define BITS_PER_UNIT (8)
#define MAX_BITSIZE_MODE_ANY_INT 128
#define MAX_BITSIZE_MODE_ANY_MODE (128*BITS_PER_UNIT)

#if GCC_VERSION >= 4001

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned char
mode_size_inline (enum machine_mode mode)
{
  extern unsigned char mode_size[NUM_MACHINE_MODES];
  switch (mode)
    {
    case VOIDmode: return 0;
    case BLKmode: return 0;
    case CCmode: return 4;
    case CCGCmode: return 4;
    case CCGOCmode: return 4;
    case CCNOmode: return 4;
    case CCAmode: return 4;
    case CCCmode: return 4;
    case CCOmode: return 4;
    case CCSmode: return 4;
    case CCZmode: return 4;
    case CCFPmode: return 4;
    case CCFPUmode: return 4;
    case BImode: return 1;
    case QImode: return 1;
    case HImode: return 2;
    case SImode: return 4;
    case DImode: return 8;
    case TImode: return 16;
    case OImode: return 32;
    case XImode: return 64;
    case QQmode: return 1;
    case HQmode: return 2;
    case SQmode: return 4;
    case DQmode: return 8;
    case TQmode: return 16;
    case UQQmode: return 1;
    case UHQmode: return 2;
    case USQmode: return 4;
    case UDQmode: return 8;
    case UTQmode: return 16;
    case HAmode: return 2;
    case SAmode: return 4;
    case DAmode: return 8;
    case TAmode: return 16;
    case UHAmode: return 2;
    case USAmode: return 4;
    case UDAmode: return 8;
    case UTAmode: return 16;
    case SFmode: return 4;
    case DFmode: return 8;
    case TFmode: return 16;
    case SDmode: return 4;
    case DDmode: return 8;
    case TDmode: return 16;
    case CQImode: return 2;
    case CHImode: return 4;
    case CSImode: return 8;
    case CDImode: return 16;
    case CTImode: return 32;
    case COImode: return 64;
    case CXImode: return 128;
    case SCmode: return 8;
    case DCmode: return 16;
    case TCmode: return 32;
    case V2QImode: return 2;
    case V4QImode: return 4;
    case V2HImode: return 4;
    case V1SImode: return 4;
    case V8QImode: return 8;
    case V4HImode: return 8;
    case V2SImode: return 8;
    case V1DImode: return 8;
    case V16QImode: return 16;
    case V8HImode: return 16;
    case V4SImode: return 16;
    case V2DImode: return 16;
    case V1TImode: return 16;
    case V32QImode: return 32;
    case V16HImode: return 32;
    case V8SImode: return 32;
    case V4DImode: return 32;
    case V2TImode: return 32;
    case V64QImode: return 64;
    case V32HImode: return 64;
    case V16SImode: return 64;
    case V8DImode: return 64;
    case V4TImode: return 64;
    case V128QImode: return 128;
    case V64HImode: return 128;
    case V32SImode: return 128;
    case V16DImode: return 128;
    case V8TImode: return 128;
    case V2SFmode: return 8;
    case V4SFmode: return 16;
    case V2DFmode: return 16;
    case V8SFmode: return 32;
    case V4DFmode: return 32;
    case V2TFmode: return 32;
    case V16SFmode: return 64;
    case V8DFmode: return 64;
    case V4TFmode: return 64;
    case V32SFmode: return 128;
    case V16DFmode: return 128;
    case V8TFmode: return 128;
    default: return mode_size[mode];
    }
}

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned char
mode_nunits_inline (enum machine_mode mode)
{
  extern const unsigned char mode_nunits[NUM_MACHINE_MODES];
  switch (mode)
    {
    case VOIDmode: return 0;
    case BLKmode: return 0;
    case CCmode: return 1;
    case CCGCmode: return 1;
    case CCGOCmode: return 1;
    case CCNOmode: return 1;
    case CCAmode: return 1;
    case CCCmode: return 1;
    case CCOmode: return 1;
    case CCSmode: return 1;
    case CCZmode: return 1;
    case CCFPmode: return 1;
    case CCFPUmode: return 1;
    case BImode: return 1;
    case QImode: return 1;
    case HImode: return 1;
    case SImode: return 1;
    case DImode: return 1;
    case TImode: return 1;
    case OImode: return 1;
    case XImode: return 1;
    case QQmode: return 1;
    case HQmode: return 1;
    case SQmode: return 1;
    case DQmode: return 1;
    case TQmode: return 1;
    case UQQmode: return 1;
    case UHQmode: return 1;
    case USQmode: return 1;
    case UDQmode: return 1;
    case UTQmode: return 1;
    case HAmode: return 1;
    case SAmode: return 1;
    case DAmode: return 1;
    case TAmode: return 1;
    case UHAmode: return 1;
    case USAmode: return 1;
    case UDAmode: return 1;
    case UTAmode: return 1;
    case SFmode: return 1;
    case DFmode: return 1;
    case XFmode: return 1;
    case TFmode: return 1;
    case SDmode: return 1;
    case DDmode: return 1;
    case TDmode: return 1;
    case CQImode: return 2;
    case CHImode: return 2;
    case CSImode: return 2;
    case CDImode: return 2;
    case CTImode: return 2;
    case COImode: return 2;
    case CXImode: return 2;
    case SCmode: return 2;
    case DCmode: return 2;
    case XCmode: return 2;
    case TCmode: return 2;
    case V2QImode: return 2;
    case V4QImode: return 4;
    case V2HImode: return 2;
    case V1SImode: return 1;
    case V8QImode: return 8;
    case V4HImode: return 4;
    case V2SImode: return 2;
    case V1DImode: return 1;
    case V16QImode: return 16;
    case V8HImode: return 8;
    case V4SImode: return 4;
    case V2DImode: return 2;
    case V1TImode: return 1;
    case V32QImode: return 32;
    case V16HImode: return 16;
    case V8SImode: return 8;
    case V4DImode: return 4;
    case V2TImode: return 2;
    case V64QImode: return 64;
    case V32HImode: return 32;
    case V16SImode: return 16;
    case V8DImode: return 8;
    case V4TImode: return 4;
    case V128QImode: return 128;
    case V64HImode: return 64;
    case V32SImode: return 32;
    case V16DImode: return 16;
    case V8TImode: return 8;
    case V2SFmode: return 2;
    case V4SFmode: return 4;
    case V2DFmode: return 2;
    case V8SFmode: return 8;
    case V4DFmode: return 4;
    case V2TFmode: return 2;
    case V16SFmode: return 16;
    case V8DFmode: return 8;
    case V4TFmode: return 4;
    case V32SFmode: return 32;
    case V16DFmode: return 16;
    case V8TFmode: return 8;
    default: return mode_nunits[mode];
    }
}

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned char
mode_inner_inline (enum machine_mode mode)
{
  extern const unsigned char mode_inner[NUM_MACHINE_MODES];
  switch (mode)
    {
    case VOIDmode: return VOIDmode;
    case BLKmode: return VOIDmode;
    case CCmode: return VOIDmode;
    case CCGCmode: return VOIDmode;
    case CCGOCmode: return VOIDmode;
    case CCNOmode: return VOIDmode;
    case CCAmode: return VOIDmode;
    case CCCmode: return VOIDmode;
    case CCOmode: return VOIDmode;
    case CCSmode: return VOIDmode;
    case CCZmode: return VOIDmode;
    case CCFPmode: return VOIDmode;
    case CCFPUmode: return VOIDmode;
    case BImode: return VOIDmode;
    case QImode: return VOIDmode;
    case HImode: return VOIDmode;
    case SImode: return VOIDmode;
    case DImode: return VOIDmode;
    case TImode: return VOIDmode;
    case OImode: return VOIDmode;
    case XImode: return VOIDmode;
    case QQmode: return VOIDmode;
    case HQmode: return VOIDmode;
    case SQmode: return VOIDmode;
    case DQmode: return VOIDmode;
    case TQmode: return VOIDmode;
    case UQQmode: return VOIDmode;
    case UHQmode: return VOIDmode;
    case USQmode: return VOIDmode;
    case UDQmode: return VOIDmode;
    case UTQmode: return VOIDmode;
    case HAmode: return VOIDmode;
    case SAmode: return VOIDmode;
    case DAmode: return VOIDmode;
    case TAmode: return VOIDmode;
    case UHAmode: return VOIDmode;
    case USAmode: return VOIDmode;
    case UDAmode: return VOIDmode;
    case UTAmode: return VOIDmode;
    case SFmode: return VOIDmode;
    case DFmode: return VOIDmode;
    case XFmode: return VOIDmode;
    case TFmode: return VOIDmode;
    case SDmode: return VOIDmode;
    case DDmode: return VOIDmode;
    case TDmode: return VOIDmode;
    case CQImode: return QImode;
    case CHImode: return HImode;
    case CSImode: return SImode;
    case CDImode: return DImode;
    case CTImode: return TImode;
    case COImode: return OImode;
    case CXImode: return XImode;
    case SCmode: return SFmode;
    case DCmode: return DFmode;
    case XCmode: return XFmode;
    case TCmode: return TFmode;
    case V2QImode: return QImode;
    case V4QImode: return QImode;
    case V2HImode: return HImode;
    case V1SImode: return SImode;
    case V8QImode: return QImode;
    case V4HImode: return HImode;
    case V2SImode: return SImode;
    case V1DImode: return DImode;
    case V16QImode: return QImode;
    case V8HImode: return HImode;
    case V4SImode: return SImode;
    case V2DImode: return DImode;
    case V1TImode: return TImode;
    case V32QImode: return QImode;
    case V16HImode: return HImode;
    case V8SImode: return SImode;
    case V4DImode: return DImode;
    case V2TImode: return TImode;
    case V64QImode: return QImode;
    case V32HImode: return HImode;
    case V16SImode: return SImode;
    case V8DImode: return DImode;
    case V4TImode: return TImode;
    case V128QImode: return QImode;
    case V64HImode: return HImode;
    case V32SImode: return SImode;
    case V16DImode: return DImode;
    case V8TImode: return TImode;
    case V2SFmode: return SFmode;
    case V4SFmode: return SFmode;
    case V2DFmode: return DFmode;
    case V8SFmode: return SFmode;
    case V4DFmode: return DFmode;
    case V2TFmode: return TFmode;
    case V16SFmode: return SFmode;
    case V8DFmode: return DFmode;
    case V4TFmode: return TFmode;
    case V32SFmode: return SFmode;
    case V16DFmode: return DFmode;
    case V8TFmode: return TFmode;
    default: return mode_inner[mode];
    }
}

#endif /* GCC_VERSION >= 4001 */

#endif /* insn-modes.h */
