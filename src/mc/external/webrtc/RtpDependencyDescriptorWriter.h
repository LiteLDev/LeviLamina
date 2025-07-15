#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnke0c362;
        ::ll::UntypedStorage<1, 1> mUnk2d661a;
        ::ll::UntypedStorage<1, 1> mUnk9f210a;
        ::ll::UntypedStorage<1, 1> mUnkc231f8;
        ::ll::UntypedStorage<4, 4> mUnk3bcb6e;
        // NOLINTEND

    public:
        // prevent constructor by default
        TemplateMatch& operator=(TemplateMatch const&);
        TemplateMatch(TemplateMatch const&);
        TemplateMatch();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk8d437e;
    ::ll::UntypedStorage<8, 8>  mUnk1a89d6;
    ::ll::UntypedStorage<8, 8>  mUnk954103;
    ::ll::UntypedStorage<4, 4>  mUnk26891a;
    ::ll::UntypedStorage<8, 32> mUnkdf423b;
    ::ll::UntypedStorage<8, 16> mUnkd891db;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpDependencyDescriptorWriter& operator=(RtpDependencyDescriptorWriter const&);
    RtpDependencyDescriptorWriter(RtpDependencyDescriptorWriter const&);
    RtpDependencyDescriptorWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RtpDependencyDescriptorWriter::TemplateMatch CalculateMatch(
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::webrtc::FrameDependencyTemplate>>>
            frame_template
    ) const;

    MCNAPI void FindBestTemplate();

    MCNAPI bool HasExtendedFields() const;

    MCNAPI RtpDependencyDescriptorWriter(
        ::rtc::ArrayView<uchar>                   data,
        ::webrtc::FrameDependencyStructure const& structure,
        ::std::bitset<32>                         active_chains,
        ::webrtc::DependencyDescriptor const&     descriptor
    );

    MCNAPI bool ShouldWriteActiveDecodeTargetsBitmask() const;

    MCNAPI int StructureSizeBits() const;

    MCNAPI uint64 TemplateId() const;

    MCNAPI int ValueSizeBits() const;

    MCNAPI bool Write();

    MCNAPI void WriteBits(uint64 val, uint64 bit_count);

    MCNAPI void WriteExtendedFields();

    MCNAPI void WriteFrameChains();

    MCNAPI void WriteFrameDependencyDefinition();

    MCNAPI void WriteFrameDtis();

    MCNAPI void WriteFrameFdiffs();

    MCNAPI void WriteMandatoryFields();

    MCNAPI void WriteNonSymmetric(uint value, uint num_values);

    MCNAPI void WriteResolutions();

    MCNAPI void WriteTemplateChains();

    MCNAPI void WriteTemplateDependencyStructure();

    MCNAPI void WriteTemplateDtis();

    MCNAPI void WriteTemplateFdiffs();

    MCNAPI void WriteTemplateLayers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::ArrayView<uchar>                   data,
        ::webrtc::FrameDependencyStructure const& structure,
        ::std::bitset<32>                         active_chains,
        ::webrtc::DependencyDescriptor const&     descriptor
    );
    // NOLINTEND
};

} // namespace webrtc
