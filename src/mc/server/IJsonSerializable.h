#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IJsonSerializable {

public:
    // prevent constructor by default
    IJsonSerializable& operator=(IJsonSerializable const&) = delete;
    IJsonSerializable(IJsonSerializable const&)            = delete;
    IJsonSerializable()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?serialize\@AllowListEntry\@\@UEAAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serialize(class Json::Value&) = 0;
    /**
     * @vftbl 2
     * @symbol ?deserialize\@AllowListEntry\@\@UEAAXAEAVValue\@Json\@\@\@Z
     */
    virtual void deserialize(class Json::Value&) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IJSONSERIALIZABLE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IJsonSerializable();
#endif
    // NOLINTEND
};
