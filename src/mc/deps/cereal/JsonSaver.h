#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicRapidJSONSchemaWriter.h"
#include "mc/deps/cereal/BasicSaver.h"

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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
