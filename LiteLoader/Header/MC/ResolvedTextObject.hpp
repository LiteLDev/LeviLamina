// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResolvedTextObject {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOLVEDTEXTOBJECT
public:
    class ResolvedTextObject& operator=(class ResolvedTextObject const &) = delete;
    ResolvedTextObject(class ResolvedTextObject const &) = delete;
    ResolvedTextObject() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOLVEDTEXTOBJECT
public:
#endif
    MCAPI std::string getAsJsonString() const;
    MCAPI ~ResolvedTextObject();



};