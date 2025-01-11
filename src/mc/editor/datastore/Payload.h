#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Editor::DataStore {

class Payload {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Json::Value deserialize(::std::string const& payloadStr);

    MCAPI static void merge(::Json::Value& out, ::Json::Value const& in);

    MCAPI static ::std::string serialize(::Json::Value const& payload);
    // NOLINTEND
};

} // namespace Editor::DataStore
