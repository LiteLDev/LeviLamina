#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class Input; }
namespace Puv { class LoadResultAny; }
namespace Puv { class VersionRange; }
// clang-format on

namespace Puv {

class ParserBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdde19d;
    ::ll::UntypedStorage<8, 56> mUnk480fe1;
    // NOLINTEND

public:
    // prevent constructor by default
    ParserBase& operator=(ParserBase const&);
    ParserBase(ParserBase const&);
    ParserBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParserBase() = default;

    // vIndex: 1
    virtual ::Puv::LoadResultAny doParse(::Puv::Input const&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParserBase(::SemVersion const& parserVersion, ::Puv::VersionRange supportedVersions);

    MCNAPI ::Puv::LoadResultAny parse(::Puv::Input const& input) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SemVersion const& parserVersion, ::Puv::VersionRange supportedVersions);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Puv
