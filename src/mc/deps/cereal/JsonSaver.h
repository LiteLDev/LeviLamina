#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicRapidJSONSchemaWriter.h"
#include "mc/deps/cereal/BasicSaver.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SaverConfig; }
// clang-format on

namespace cereal {

class JsonSaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        168,
        ::cereal::BasicRapidJSONSchemaWriter<::rapidjson::Writer<
            ::rapidjson::GenericStringBuffer<::rapidjson::UTF8<char>, ::rapidjson::CrtAllocator>,
            ::rapidjson::UTF8<char>,
            ::rapidjson::UTF8<char>,
            ::rapidjson::CrtAllocator,
            0>>>
        mWriter;
    ::ll::TypedStorage<
        8,
        184,
        ::cereal::BasicRapidJSONSchemaWriter<::rapidjson::PrettyWriter<
            ::rapidjson::GenericStringBuffer<::rapidjson::UTF8<char>, ::rapidjson::CrtAllocator>,
            ::rapidjson::UTF8<char>,
            ::rapidjson::UTF8<char>,
            ::rapidjson::CrtAllocator,
            0>>>
                                   mPrettyWriter;
    ::ll::TypedStorage<1, 1, bool> mPretty;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonSaver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JsonSaver() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JsonSaver(::cereal::ReflectionCtx const&, ::cereal::SaverConfig const&);

    MCAPI JsonSaver(::cereal::ReflectionCtx const& reflectionCtx, char indentChar, uint indentAmount);

    MCAPI ::std::string toString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const&, ::cereal::SaverConfig const&);

    MCAPI void* $ctor(::cereal::ReflectionCtx const& reflectionCtx, char indentChar, uint indentAmount);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
