/**
 * @file  IJsonSerializable.hpp
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
 * @brief MC class IJsonSerializable.
 *
 */
class IJsonSerializable {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IJSONSERIALIZABLE
public:
    class IJsonSerializable& operator=(class IJsonSerializable const &) = delete;
    IJsonSerializable(class IJsonSerializable const &) = delete;
    IJsonSerializable() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?serialize\@AllowListEntry\@\@UEAAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serialize(class Json::Value &) = 0;
    /**
     * @vftbl 2
     * @symbol ?deserialize\@AllowListEntry\@\@UEAAXAEAVValue\@Json\@\@\@Z
     */
    virtual void deserialize(class Json::Value &) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IJSONSERIALIZABLE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IJsonSerializable();
#endif

};
