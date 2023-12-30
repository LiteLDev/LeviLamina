#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/FecMaskType.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::internal { class PacketMaskTable; }
// clang-format on

namespace webrtc::internal {
// NOLINTBEGIN
// symbol: ?CopyColumn@internal@webrtc@@YAXPEAEH0HHHH@Z
MCAPI void CopyColumn(uchar*, int, uchar*, int, int, int, int);

// symbol: ?GeneratePacketMasks@internal@webrtc@@YAXHHH_NPEAVPacketMaskTable@12@PEAE@Z
MCAPI void GeneratePacketMasks(int, int, int, bool, class webrtc::internal::PacketMaskTable*, uchar*);

// symbol: ?ImportantPacketProtection@internal@webrtc@@YAXHHHPEAEPEAVPacketMaskTable@12@@Z
MCAPI void ImportantPacketProtection(int, int, int, uchar*, class webrtc::internal::PacketMaskTable*);

// symbol: ?InsertZeroColumns@internal@webrtc@@YAXHPEAEHHH@Z
MCAPI void InsertZeroColumns(int, uchar*, int, int, int);

// symbol: ?LookUpInFecTable@internal@webrtc@@YA?AV?$ArrayView@$$CBE$0?BCGH@@rtc@@PEBEHH@Z
MCAPI class rtc::ArrayView<uchar const, -4711> LookUpInFecTable(uchar const*, int, int);

// symbol: ?PacketMaskSize@internal@webrtc@@YA_K_K@Z
MCAPI uint64 PacketMaskSize(uint64);

// symbol: ?SetProtectionAllocation@internal@webrtc@@YAHHHH@Z
MCAPI int SetProtectionAllocation(int, int, int);

// symbol: ?UnequalProtectionMask@internal@webrtc@@YAXHHHHPEAEPEAVPacketMaskTable@12@@Z
MCAPI void UnequalProtectionMask(int, int, int, int, uchar*, class webrtc::internal::PacketMaskTable*);
// NOLINTEND

}; // namespace webrtc::internal
