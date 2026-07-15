#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/ParserBase.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class VersionRange; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv {

class CerealParserBase : public ::Puv::ParserBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf078ff;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealParserBase& operator=(CerealParserBase const&);
    CerealParserBase(CerealParserBase const&);
    CerealParserBase();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI CerealParserBase(::cereal::ReflectionCtx const& ctx, ::SemVersion const& parserVersion);
#endif

    MCNAPI CerealParserBase(
        ::cereal::ReflectionCtx const& ctx,
        ::SemVersion                   parserVersion,
        ::Puv::VersionRange            supportedRange
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::cereal::ReflectionCtx const& ctx, ::SemVersion const& parserVersion);
#endif

    MCNAPI void*
    $ctor(::cereal::ReflectionCtx const& ctx, ::SemVersion parserVersion, ::Puv::VersionRange supportedRange);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Puv
