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
    // vIndex: 0
    virtual ~IScriptPluginSourceEnumerator() = default;

    // vIndex: 1
    virtual ::std::vector<::std::shared_ptr<::IScriptPluginSource>> const& getPluginSources() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
