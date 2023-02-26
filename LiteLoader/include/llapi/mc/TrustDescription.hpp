/**
 * @file  TrustDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TrustDescription.
 *
 */
class TrustDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRUSTDESCRIPTION
public:
    class TrustDescription& operator=(class TrustDescription const &) = delete;
    TrustDescription(class TrustDescription const &) = delete;
    TrustDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?getJsonName\@TrustDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~TrustDescription();
    /**
     * @vftbl  3
     * @symbol  ?serializeData\@TrustDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};