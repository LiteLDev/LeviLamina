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
    MCNAPI static ::Json::Value deserialize(::std::string const& payloadStr);

    MCNAPI static void merge(::Json::Value& out, ::Json::Value const& in);

    MCNAPI static ::std::string serialize(::Json::Value const& payload);
    // NOLINTEND
};

} // namespace Editor::DataStore
