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
    VersionParser& operator=(VersionParser const&);
    VersionParser(VersionParser const&);
    VersionParser();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1VersionParser@Puv@@UEAA@XZ
    virtual ~VersionParser();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: ?supportsVersion@VersionParser@Puv@@UEBA_NAEBVSemVersion@@@Z
    virtual bool supportsVersion(class SemVersion const&) const;

    // symbol:
    // ??0VersionParser@Puv@@QEAA@V?$vector@U?$pair@VSemVersion@@V1@@std@@V?$allocator@U?$pair@VSemVersion@@V1@@std@@@2@@std@@@Z
    MCAPI explicit VersionParser(std::vector<std::pair<class SemVersion, class SemVersion>>);

    // symbol: ?maxSupportedVersion@VersionParser@Puv@@QEBA?AVSemVersion@@XZ
    MCAPI class SemVersion maxSupportedVersion() const;

    // NOLINTEND
};

}; // namespace Puv
