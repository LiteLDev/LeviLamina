#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::internal {

class CerealUpgraderBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk52983c;
    ::ll::UntypedStorage<8, 224> mUnkcce99d;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealUpgraderBase& operator=(CerealUpgraderBase const&);
    CerealUpgraderBase(CerealUpgraderBase const&);
    CerealUpgraderBase();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CerealUpgraderBase(::cereal::ReflectionCtx const& ctx);

    MCNAPI void bindCallback(
        ::std::function<void(::entt::meta_any&, ::entt::meta_any&)> cb,
        ::std::vector<::std::string> const&                         source,
        ::std::vector<::std::string>                                destination
    );

    MCNAPI void move(::std::vector<::std::string> const& source, ::std::vector<::std::string> destination);

    MCNAPI ~CerealUpgraderBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
