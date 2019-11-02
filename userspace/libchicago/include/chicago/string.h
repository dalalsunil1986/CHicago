// File author is Ítalo Lima Marconato Matias
//
// Created on July 15 of 2018, at 20:03 BRT
// Last edited on October 31 of 2019, at 18:02 BRT

#ifndef __CHICAGO_STRING_H__
#define __CHICAGO_STRING_H__

#include <chicago/types.h>

PVoid StrCopyMemory(PVoid restrict dest, PVoid restrict src, UIntPtr count);
PVoid StrSetMemory(PVoid dest, UInt8 val, UIntPtr count);
Boolean StrCompareMemory(PVoid restrict m1, PVoid restrict m2, UIntPtr count);
UIntPtr StrGetLength(PWChar str);
Boolean StrCompare(PWChar dest, PWChar src);
PWChar StrCopy(PWChar dest, PWChar src);
Void StrConcatenate(PWChar dest, PWChar src);
PWChar StrTokenize(PWChar str, PWChar delim);
PWChar StrDuplicate(PWChar str);
UIntPtr StrFormat(PWChar str, PWChar data, ...);

#endif		// __CHICAGO_STRING_H__
