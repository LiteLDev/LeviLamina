#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/NonStandardGroupId.h"
#include "mc/deps/webrtc/StatExposureCriteria.h"

namespace webrtc {

class RTCStatsMemberInterface {
public:
    // RTCStatsMemberInterface inner types define
    enum class Type {};

public:
    // prevent constructor by default
    RTCStatsMemberInterface& operator=(RTCStatsMemberInterface const&);
    RTCStatsMemberInterface(RTCStatsMemberInterface const&);
    RTCStatsMemberInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCStatsMemberInterface@webrtc@@UEAA@XZ
    virtual ~RTCStatsMemberInterface();

    // vIndex: 1, symbol: ?type@?$RTCStatsMember@I@webrtc@@UEBA?AW4Type@RTCStatsMemberInterface@2@XZ
    virtual ::webrtc::RTCStatsMemberInterface::Type type() const = 0;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3() = 0;

    // vIndex: 4, symbol: ?is_defined@?$RTCStatsMember@I@webrtc@@UEBA_NXZ
    virtual bool is_defined() const = 0;

    // vIndex: 5, symbol:
    // ?group_ids@RTCStatsMemberInterface@webrtc@@UEBA?AV?$vector@W4NonStandardGroupId@webrtc@@V?$allocator@W4NonStandardGroupId@webrtc@@@std@@@std@@XZ
    virtual std::vector<::webrtc::NonStandardGroupId> group_ids() const;

    // vIndex: 6, symbol: ?exposure_criteria@RTCStatsMemberInterface@webrtc@@UEBA?AW4StatExposureCriteria@2@XZ
    virtual ::webrtc::StatExposureCriteria exposure_criteria() const;

    // vIndex: 7, symbol:
    // ?ValueToString@?$RTCStatsMember@N@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ValueToString() const = 0;

    // vIndex: 8, symbol:
    // ?ValueToJson@?$RTCStatsMember@N@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ValueToJson() const = 0;

    // vIndex: 9, symbol: ?IsEqual@?$RTCStatsMember@I@webrtc@@MEBA_NAEBVRTCStatsMemberInterface@2@@Z
    virtual bool IsEqual(class webrtc::RTCStatsMemberInterface const&) const = 0;

    // NOLINTEND
};

}; // namespace webrtc
