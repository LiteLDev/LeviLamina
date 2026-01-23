#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct BlockSpecifier {
public:
    // BlockSpecifier inner types define
    using StateMap = ::std::unordered_map<::std::string, ::std::variant<int, bool, ::std::string>>;

    using StateMapValue = ::std::variant<int, bool, ::std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<0>>                                                   mBlockName;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::variant<int, bool, ::std::string>>> mStates;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSpecifier(BlockSpecifier const&);
    BlockSpecifier();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockSpecifier(::SharedTypes::v1_20_60::BlockSpecifier&&);

    MCAPI ::SharedTypes::v1_20_60::BlockSpecifier& operator=(::SharedTypes::v1_20_60::BlockSpecifier&&);

    MCFOLD ::SharedTypes::v1_20_60::BlockSpecifier& operator=(::SharedTypes::v1_20_60::BlockSpecifier const&);

    MCAPI ~BlockSpecifier();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_60::BlockSpecifier&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
