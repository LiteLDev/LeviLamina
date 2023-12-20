#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidateInterface; }
// clang-format on

namespace NetherNet {

class CandidateAdd {
public:
    // prevent constructor by default
    CandidateAdd& operator=(CandidateAdd const&);
    CandidateAdd(CandidateAdd const&);
    CandidateAdd();

public:
    // NOLINTBEGIN
    // symbol: ?GetSdp@CandidateAdd@NetherNet@@QEBAPEAVIceCandidateInterface@webrtc@@XZ
    MCAPI class webrtc::IceCandidateInterface* GetSdp() const;

    // symbol: ?ToString@CandidateAdd@NetherNet@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ??1CandidateAdd@NetherNet@@QEAA@XZ
    MCAPI ~CandidateAdd();

    // symbol:
    // ?TryCreate@CandidateAdd@NetherNet@@SA?AV?$optional@VCandidateAdd@NetherNet@@@std@@_KAEBVIceCandidateInterface@webrtc@@@Z
    MCAPI static std::optional<class NetherNet::CandidateAdd>
    TryCreate(uint64, class webrtc::IceCandidateInterface const&);

    // symbol:
    // ?TryParse@CandidateAdd@NetherNet@@SA?AV?$optional@VCandidateAdd@NetherNet@@@std@@AEBV?$array@V?$basic_string_view@DU?$char_traits@D@std@@@std@@$02@4@@Z
    MCAPI static std::optional<class NetherNet::CandidateAdd> TryParse(std::array<std::string_view, 3> const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?kIdentifier@CandidateAdd@NetherNet@@0V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const kIdentifier;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $kIdentifier() { return kIdentifier; }

    // NOLINTEND
};

}; // namespace NetherNet
