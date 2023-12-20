#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/SdpType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class ContentGroup; }
namespace cricket { class SessionDescription; }
// clang-format on

namespace webrtc {

class BundleManager {
public:
    // prevent constructor by default
    BundleManager& operator=(BundleManager const&);
    BundleManager(BundleManager const&);
    BundleManager();

public:
    // NOLINTBEGIN
    // symbol: ?Commit@BundleManager@webrtc@@QEAAXXZ
    MCAPI void Commit();

    // symbol: ?DeleteGroup@BundleManager@webrtc@@QEAAXPEBVContentGroup@cricket@@@Z
    MCAPI void DeleteGroup(class cricket::ContentGroup const*);

    // symbol:
    // ?DeleteMid@BundleManager@webrtc@@QEAAXPEBVContentGroup@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void DeleteMid(class cricket::ContentGroup const*, std::string const&);

    // symbol:
    // ?IsFirstMidInGroup@BundleManager@webrtc@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool IsFirstMidInGroup(std::string const&) const;

    // symbol:
    // ?LookupGroupByMid@BundleManager@webrtc@@QEAAPEAVContentGroup@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::ContentGroup* LookupGroupByMid(std::string const&);

    // symbol:
    // ?LookupGroupByMid@BundleManager@webrtc@@QEBAPEBVContentGroup@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::ContentGroup const* LookupGroupByMid(std::string const&) const;

    // symbol: ?Rollback@BundleManager@webrtc@@QEAAXXZ
    MCAPI void Rollback();

    // symbol: ?Update@BundleManager@webrtc@@QEAAXPEBVSessionDescription@cricket@@W4SdpType@2@@Z
    MCAPI void Update(class cricket::SessionDescription const*, ::webrtc::SdpType);

    // symbol: ??1BundleManager@webrtc@@QEAA@XZ
    MCAPI ~BundleManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?RefreshEstablishedBundleGroupsByMid@BundleManager@webrtc@@AEAAXXZ
    MCAPI void RefreshEstablishedBundleGroupsByMid();

    // NOLINTEND
};

}; // namespace webrtc
