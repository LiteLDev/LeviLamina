#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicRapidJSONSchemaWriter.h"

namespace Bedrock::Resources {

class PrettyDecimalWriter : public ::cereal::BasicRapidJSONSchemaWriter<::rapidjson::PrettyWriter<
                                ::rapidjson::GenericStringBuffer<::rapidjson::UTF8<char>, ::rapidjson::CrtAllocator>,
                                ::rapidjson::UTF8<char>,
                                ::rapidjson::UTF8<char>,
                                ::rapidjson::CrtAllocator,
                                0>> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool write(float value) /*override*/;

    virtual ~PrettyDecimalWriter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Resources
