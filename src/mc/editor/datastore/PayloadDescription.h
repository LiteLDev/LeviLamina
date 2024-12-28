#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::DataStore {

struct PayloadDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkb5d9f9;
    ::ll::UntypedStorage<8, 40> mUnkd46627;
    ::ll::UntypedStorage<8, 40> mUnk7425ea;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadDescription& operator=(PayloadDescription const&);
    PayloadDescription(PayloadDescription const&);
    PayloadDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Editor::DataStore::PayloadDescription& operator=(::Editor::DataStore::PayloadDescription&&);

    MCAPI ~PayloadDescription();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::DataStore
