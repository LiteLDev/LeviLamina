#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/ParserBase.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class ParserBase; }
// clang-format on

namespace Puv {

class VersionParser : public ::Puv::ParserBase {
public:
    // prevent constructor by default
    VersionParser& operator=(VersionParser const&) = delete;
    VersionParser(VersionParser const&)            = delete;
    VersionParser()                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?supportsVersion@VersionParser@Puv@@UEBA_NAEBVSemVersion@@@Z
    virtual bool supportsVersion(class SemVersion const&) const;

    // symbol: ??1VersionParser@Puv@@UEAA@XZ
    MCVAPI ~VersionParser();

    // symbol: ??0VersionParser@Puv@@QEAA@V?$initializer_list@U?$pair@VSemVersion@@V1@@std@@@std@@@Z
    MCAPI VersionParser(std::initializer_list<std::pair<class SemVersion, class SemVersion>>);

    // symbol: ?maxSupportedVersion@VersionParser@Puv@@QEBA?AVSemVersion@@XZ
    MCAPI class SemVersion maxSupportedVersion() const;

    // NOLINTEND
};

}; // namespace Puv
