#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSource;
// clang-format on

class IScriptPluginSourceEnumerator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptPluginSourceEnumerator() = default;

    virtual ::std::vector<::std::shared_ptr<::IScriptPluginSource>> const& getPluginSources() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
