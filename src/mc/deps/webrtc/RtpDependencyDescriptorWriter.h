#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct DependencyDescriptor; }
namespace webrtc { struct FrameDependencyStructure; }
namespace webrtc { struct FrameDependencyTemplate; }
// clang-format on

namespace webrtc {

class RtpDependencyDescriptorWriter {
public:
    // RtpDependencyDescriptorWriter inner types declare
    // clang-format off
    struct TemplateMatch;
    // clang-format on

    // RtpDependencyDescriptorWriter inner types define
    struct TemplateMatch {
    public:
        // prevent constructor by default
        TemplateMatch& operator=(TemplateMatch const&);
        TemplateMatch(TemplateMatch const&);
        TemplateMatch();
    };

public:
    // prevent constructor by default
    RtpDependencyDescriptorWriter& operator=(RtpDependencyDescriptorWriter const&);
    RtpDependencyDescriptorWriter(RtpDependencyDescriptorWriter const&);
    RtpDependencyDescriptorWriter();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0RtpDependencyDescriptorWriter@webrtc@@QEAA@V?$ArrayView@E$0?BCGH@@rtc@@AEBUFrameDependencyStructure@1@V?$bitset@$0CA@@std@@AEBUDependencyDescriptor@1@@Z
    MCAPI
    RtpDependencyDescriptorWriter(class rtc::ArrayView<uchar, -4711>, struct webrtc::FrameDependencyStructure const&, std::bitset<32>, struct webrtc::DependencyDescriptor const&);

    // symbol: ?ValueSizeBits@RtpDependencyDescriptorWriter@webrtc@@QEBAHXZ
    MCAPI int ValueSizeBits() const;

    // symbol: ?Write@RtpDependencyDescriptorWriter@webrtc@@QEAA_NXZ
    MCAPI bool Write();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?CalculateMatch@RtpDependencyDescriptorWriter@webrtc@@AEBA?AUTemplateMatch@12@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UFrameDependencyTemplate@webrtc@@@std@@@std@@@std@@@Z
    MCAPI struct webrtc::RtpDependencyDescriptorWriter::TemplateMatch
        CalculateMatch(std::_Vector_const_iterator<
                       std::_Vector_val<std::_Simple_types<struct webrtc::FrameDependencyTemplate>>>) const;

    // symbol: ?FindBestTemplate@RtpDependencyDescriptorWriter@webrtc@@AEAAXXZ
    MCAPI void FindBestTemplate();

    // symbol: ?HasExtendedFields@RtpDependencyDescriptorWriter@webrtc@@AEBA_NXZ
    MCAPI bool HasExtendedFields() const;

    // symbol: ?ShouldWriteActiveDecodeTargetsBitmask@RtpDependencyDescriptorWriter@webrtc@@AEBA_NXZ
    MCAPI bool ShouldWriteActiveDecodeTargetsBitmask() const;

    // symbol: ?StructureSizeBits@RtpDependencyDescriptorWriter@webrtc@@AEBAHXZ
    MCAPI int StructureSizeBits() const;

    // symbol: ?TemplateId@RtpDependencyDescriptorWriter@webrtc@@AEBA_KXZ
    MCAPI uint64 TemplateId() const;

    // symbol: ?WriteBits@RtpDependencyDescriptorWriter@webrtc@@AEAAX_K0@Z
    MCAPI void WriteBits(uint64, uint64);

    // symbol: ?WriteExtendedFields@RtpDependencyDescriptorWriter@webrtc@@AEAAXXZ
    MCAPI void WriteExtendedFields();

    // symbol: ?WriteFrameChains@RtpDependencyDescriptorWriter@webrtc@@AEAAXXZ
    MCAPI void WriteFrameChains();

    // symbol: ?WriteFrameDependencyDefinition@RtpDependencyDescriptorWriter@webrtc@@AEAAXXZ
    MCAPI void WriteFrameDependencyDefinition();

    // symbol: ?WriteFrameDtis@RtpDependencyDescriptorWriter@webrtc@@AEAAXXZ
    MCAPI void WriteFrameDtis();

    // symbol: ?WriteFrameFdiffs@RtpDependencyDescriptorWriter@webrtc@@AEAAXXZ
    MCAPI void WriteFrameFdiffs();

    // symbol: ?WriteMandatoryFields@RtpDependencyDescriptorWriter@webrtc@@AEAAXXZ
    MCAPI void WriteMandatoryFields();

    // symbol: ?WriteNonSymmetric@RtpDependencyDescriptorWriter@webrtc@@AEAAXII@Z
    MCAPI void WriteNonSymmetric(uint, uint);

    // symbol: ?WriteResolutions@RtpDependencyDescriptorWriter@webrtc@@AEAAXXZ
    MCAPI void WriteResolutions();

    // symbol: ?WriteTemplateChains@RtpDependencyDescriptorWriter@webrtc@@AEAAXXZ
    MCAPI void WriteTemplateChains();

    // symbol: ?WriteTemplateDependencyStructure@RtpDependencyDescriptorWriter@webrtc@@AEAAXXZ
    MCAPI void WriteTemplateDependencyStructure();

    // symbol: ?WriteTemplateDtis@RtpDependencyDescriptorWriter@webrtc@@AEAAXXZ
    MCAPI void WriteTemplateDtis();

    // symbol: ?WriteTemplateFdiffs@RtpDependencyDescriptorWriter@webrtc@@AEAAXXZ
    MCAPI void WriteTemplateFdiffs();

    // symbol: ?WriteTemplateLayers@RtpDependencyDescriptorWriter@webrtc@@AEAAXXZ
    MCAPI void WriteTemplateLayers();

    // NOLINTEND
};

}; // namespace webrtc
