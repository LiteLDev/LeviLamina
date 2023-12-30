#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class UniqueRandomIdGenerator; }
// clang-format on

namespace cricket {

struct StreamParams {
public:
    // NOLINTBEGIN
    // symbol: ?GenerateSsrcs@StreamParams@cricket@@QEAAXH_N0PEAVUniqueRandomIdGenerator@rtc@@@Z
    MCAPI void GenerateSsrcs(int, bool, bool, class rtc::UniqueRandomIdGenerator*);

    // symbol: ??0StreamParams@cricket@@QEAA@XZ
    MCAPI StreamParams();

    // symbol: ??0StreamParams@cricket@@QEAA@$$QEAU01@@Z
    MCAPI StreamParams(struct cricket::StreamParams&&);

    // symbol: ??0StreamParams@cricket@@QEAA@AEBU01@@Z
    MCAPI StreamParams(struct cricket::StreamParams const&);

    // symbol:
    // ?first_stream_id@StreamParams@cricket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string first_stream_id() const;

    // symbol: ?has_ssrc@StreamParams@cricket@@QEBA_NI@Z
    MCAPI bool has_ssrc(uint) const;

    // symbol: ??4StreamParams@cricket@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct cricket::StreamParams& operator=(struct cricket::StreamParams const&);

    // symbol:
    // ?set_stream_ids@StreamParams@cricket@@QEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI void set_stream_ids(std::vector<std::string> const&);

    // symbol:
    // ?stream_ids@StreamParams@cricket@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> stream_ids() const;

    // symbol: ??1StreamParams@cricket@@QEAA@XZ
    MCAPI ~StreamParams();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?AddSecondarySsrc@StreamParams@cricket@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@II@Z
    MCAPI bool AddSecondarySsrc(std::string const&, uint, uint);

    // NOLINTEND
};

}; // namespace cricket
