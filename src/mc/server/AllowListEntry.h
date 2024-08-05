#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/IJsonSerializable.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class AllowListEntry : public ::IJsonSerializable {
public:
    // prevent constructor by default
    AllowListEntry& operator=(AllowListEntry const&);
    AllowListEntry(AllowListEntry const&);
    AllowListEntry();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AllowListEntry();

    // vIndex: 1
    virtual void serialize(class Json::Value& root);

    // vIndex: 2
    virtual void deserialize(class Json::Value& root);

    MCAPI explicit AllowListEntry(std::string name);

    // NOLINTEND
};
