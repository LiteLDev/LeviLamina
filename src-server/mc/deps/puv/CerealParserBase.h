#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/ParserBase.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class Logger; }
namespace Puv { class VersionRange; }
namespace cereal { class BasicSerializerContext; }
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CerealParserBase() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CerealParserBase(
        ::cereal::ReflectionCtx const& ctx,
        ::SemVersion                   parserVersion,
        ::Puv::VersionRange            supportedRange
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Puv::Logger makeLogger(::cereal::BasicSerializerContext const& log);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::cereal::ReflectionCtx const& ctx, ::SemVersion parserVersion, ::Puv::VersionRange supportedRange);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Puv
