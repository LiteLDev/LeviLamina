#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct DependencyDescriptor; }
namespace webrtc { struct FrameDependencyStructure; }
namespace webrtc { struct FrameDependencyTemplate; }
// clang-format on

namespace webrtc {

struct RtpDependencyDescriptorWriter {
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
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::RtpDependencyDescriptorWriter::TemplateMatch
        CalculateMatch(::std::_Vector_const_iterator<
                       ::std::_Vector_val<::std::_Simple_types<::webrtc::FrameDependencyTemplate>>>) const;

    MCAPI void FindBestTemplate();

    MCAPI bool HasExtendedFields() const;

    MCAPI
    RtpDependencyDescriptorWriter(::rtc::ArrayView<uchar>, ::webrtc::FrameDependencyStructure const&, ::std::bitset<32>, ::webrtc::DependencyDescriptor const&);

    MCAPI bool ShouldWriteActiveDecodeTargetsBitmask() const;

    MCAPI int StructureSizeBits() const;

    MCAPI uint64 TemplateId() const;

    MCAPI int ValueSizeBits() const;

    MCAPI bool Write();

    MCAPI void WriteBits(uint64, uint64);

    MCAPI void WriteExtendedFields();

    MCAPI void WriteFrameChains();

    MCAPI void WriteFrameDependencyDefinition();

    MCAPI void WriteFrameDtis();

    MCAPI void WriteFrameFdiffs();

    MCAPI void WriteMandatoryFields();

    MCAPI void WriteNonSymmetric(uint, uint);

    MCAPI void WriteResolutions();

    MCAPI void WriteTemplateChains();

    MCAPI void WriteTemplateDependencyStructure();

    MCAPI void WriteTemplateDtis();

    MCAPI void WriteTemplateFdiffs();

    MCAPI void WriteTemplateLayers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::rtc::ArrayView<uchar>, ::webrtc::FrameDependencyStructure const&, ::std::bitset<32>, ::webrtc::DependencyDescriptor const&);
    // NOLINTEND
};

} // namespace webrtc
