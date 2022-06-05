#pragma once

#include <optional>
#include <string>
#include "../Tools/Demangler/include/MicrosoftDemangle.h"

namespace FakeSymbol
{

inline static llvm::ms_demangle::SpecialIntrinsicKind consumeSpecialIntrinsicKind(StringView& MangledName)
{
    using namespace llvm::ms_demangle;
    using namespace llvm;
    if (MangledName.consumeFront("?_7"))
        return SpecialIntrinsicKind::Vftable;
    if (MangledName.consumeFront("?_8"))
        return SpecialIntrinsicKind::Vbtable;
    if (MangledName.consumeFront("?_9"))
        return SpecialIntrinsicKind::VcallThunk;
    if (MangledName.consumeFront("?_A"))
        return SpecialIntrinsicKind::Typeof;
    if (MangledName.consumeFront("?_B"))
        return SpecialIntrinsicKind::LocalStaticGuard;
    if (MangledName.consumeFront("?_C"))
        return SpecialIntrinsicKind::StringLiteralSymbol;
    if (MangledName.consumeFront("?_P"))
        return SpecialIntrinsicKind::UdtReturning;
    if (MangledName.consumeFront("?_R0"))
        return SpecialIntrinsicKind::RttiTypeDescriptor;
    if (MangledName.consumeFront("?_R1"))
        return SpecialIntrinsicKind::RttiBaseClassDescriptor;
    if (MangledName.consumeFront("?_R2"))
        return SpecialIntrinsicKind::RttiBaseClassArray;
    if (MangledName.consumeFront("?_R3"))
        return SpecialIntrinsicKind::RttiClassHierarchyDescriptor;
    if (MangledName.consumeFront("?_R4"))
        return SpecialIntrinsicKind::RttiCompleteObjLocator;
    if (MangledName.consumeFront("?_S"))
        return SpecialIntrinsicKind::LocalVftable;
    if (MangledName.consumeFront("?__E"))
        return SpecialIntrinsicKind::DynamicInitializer;
    if (MangledName.consumeFront("?__F"))
        return SpecialIntrinsicKind::DynamicAtexitDestructor;
    if (MangledName.consumeFront("?__J"))
        return SpecialIntrinsicKind::LocalStaticThreadGuard;
    return SpecialIntrinsicKind::None;
}

inline static char VirtualToCommonMap(char s)
{
    if (s == 'E')   // FC_Private | FC_Virtual
        return 'Q'; // return 'A';
    if (s == 'F')   // FC_Private | FC_Virtual | FC_Far
        return 'R'; // return 'B';
    if (s == 'M')   // FC_Protected | FC_Virtual
        return 'Q'; // return 'I';
    if (s == 'N')   // FC_Protected | FC_Virtual | FC_Far
        return 'R'; // return 'J';
    if (s == 'O')   // FC_Protected | FC_Virtual | FC_StaticThisAdjust
        return 'S'; // return 'K';
    if (s == 'P')   // FC_Protected | FC_Virtual | FC_StaticThisAdjust | FC_Far
        return 'T'; // return 'L';
    if (s == 'U')   // FC_Public | FC_Virtual
        return 'Q'; // Keep
    if (s == 'V')   // FC_Public | FC_Virtual | FC_Far
        return 'R'; // Keep
    if (s == 'W')   // FC_Public | FC_Virtual | FC_StaticThisAdjust
        return 'S'; // Keep
    if (s == 'X')   // FC_Public | FC_Virtual | FC_StaticThisAdjust | FC_Far
        return 'T'; // Keep
    return s;       // unk return original Val
}

// generate fakeSymbol for virtual functions
inline static std::optional<std::string> getFakeSymbol(const std::string& fn)
{
    using namespace llvm::ms_demangle;
    using namespace llvm;
    Demangler Demangler;
    StringView Name(fn.c_str());

    if (!Name.startsWith('?'))
        return std::nullopt;

    Name.consumeFront('?');

    SpecialIntrinsicKind SIK = consumeSpecialIntrinsicKind(Name);

    if (SIK != SpecialIntrinsicKind::None)
        return std::nullopt;

    FunctionSymbolNode* DemangledName = (FunctionSymbolNode*)Demangler.demangleDeclarator(Name);
    if (DemangledName == nullptr || DemangledName->kind() != NodeKind::FunctionSymbol || Demangler.Error)
        return std::nullopt;

    auto& FunctionClass = DemangledName->Signature->FunctionClass;
    if (FunctionClass & FC_Virtual)
    {
        std::string Result = fn;
        auto fcTag = Result.size() - FunctionClass.backup->size();
        auto& fcTagChar = Result[fcTag];
        fcTagChar = VirtualToCommonMap(fcTagChar);
        return Result;
    }
    return std::nullopt;
}

} // namespace FakeSymbol