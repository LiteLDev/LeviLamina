#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace cricket {

class SrtpSession {
public:
    // prevent constructor by default
    SrtpSession& operator=(SrtpSession const&);
    SrtpSession(SrtpSession const&);
    SrtpSession();

public:
    // NOLINTBEGIN
    // symbol: ?EnableExternalAuth@SrtpSession@cricket@@QEAAXXZ
    MCAPI void EnableExternalAuth();

    // symbol: ?GetSrtpOverhead@SrtpSession@cricket@@QEBAHXZ
    MCAPI int GetSrtpOverhead() const;

    // symbol: ?IsExternalAuthEnabled@SrtpSession@cricket@@QEBA_NXZ
    MCAPI bool IsExternalAuthEnabled() const;

    // symbol: ?ProtectRtcp@SrtpSession@cricket@@QEAA_NPEAXHHPEAH@Z
    MCAPI bool ProtectRtcp(void*, int, int, int*);

    // symbol: ?ProtectRtp@SrtpSession@cricket@@QEAA_NPEAXHHPEAH@Z
    MCAPI bool ProtectRtp(void*, int, int, int*);

    // symbol: ?SetRecv@SrtpSession@cricket@@QEAA_NHPEBE_KAEBV?$vector@HV?$allocator@H@std@@@std@@@Z
    MCAPI bool SetRecv(int, uchar const*, uint64, std::vector<int> const&);

    // symbol: ?SetSend@SrtpSession@cricket@@QEAA_NHPEBE_KAEBV?$vector@HV?$allocator@H@std@@@std@@@Z
    MCAPI bool SetSend(int, uchar const*, uint64, std::vector<int> const&);

    // symbol: ??0SrtpSession@cricket@@QEAA@AEBVFieldTrialsView@webrtc@@@Z
    MCAPI explicit SrtpSession(class webrtc::FieldTrialsView const&);

    // symbol: ?UnprotectRtcp@SrtpSession@cricket@@QEAA_NPEAXHPEAH@Z
    MCAPI bool UnprotectRtcp(void*, int, int*);

    // symbol: ?UnprotectRtp@SrtpSession@cricket@@QEAA_NPEAXHPEAH@Z
    MCAPI bool UnprotectRtp(void*, int, int*);

    // symbol: ?UpdateRecv@SrtpSession@cricket@@QEAA_NHPEBE_KAEBV?$vector@HV?$allocator@H@std@@@std@@@Z
    MCAPI bool UpdateRecv(int, uchar const*, uint64, std::vector<int> const&);

    // symbol: ?UpdateSend@SrtpSession@cricket@@QEAA_NHPEBE_KAEBV?$vector@HV?$allocator@H@std@@@std@@@Z
    MCAPI bool UpdateSend(int, uchar const*, uint64, std::vector<int> const&);

    // symbol: ??1SrtpSession@cricket@@QEAA@XZ
    MCAPI ~SrtpSession();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DoSetKey@SrtpSession@cricket@@AEAA_NHHPEBE_KAEBV?$vector@HV?$allocator@H@std@@@std@@@Z
    MCAPI bool DoSetKey(int, int, uchar const*, uint64, std::vector<int> const&);

    // symbol: ?DumpPacket@SrtpSession@cricket@@AEAAXPEBXH_N@Z
    MCAPI void DumpPacket(void const*, int, bool);

    // symbol: ?HandleEvent@SrtpSession@cricket@@AEAAXPEBUsrtp_event_data_t@@@Z
    MCAPI void HandleEvent(struct srtp_event_data_t const*);

    // symbol: ?SetKey@SrtpSession@cricket@@AEAA_NHHPEBE_KAEBV?$vector@HV?$allocator@H@std@@@std@@@Z
    MCAPI bool SetKey(int, int, uchar const*, uint64, std::vector<int> const&);

    // symbol: ?UpdateKey@SrtpSession@cricket@@AEAA_NHHPEBE_KAEBV?$vector@HV?$allocator@H@std@@@std@@@Z
    MCAPI bool UpdateKey(int, int, uchar const*, uint64, std::vector<int> const&);

    // symbol: ?HandleEventThunk@SrtpSession@cricket@@CAXPEAUsrtp_event_data_t@@@Z
    MCAPI static void HandleEventThunk(struct srtp_event_data_t*);

    // NOLINTEND
};

}; // namespace cricket
