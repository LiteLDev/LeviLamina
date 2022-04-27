#include "../../Header/Command/CommandOutputMessage.hpp"

enum CommandOutputMessageType;

namespace MC
{
inline CommandOutputMessage ^ MC::CommandOutputMessage::Create(CommandOutputMessage ^ cm)
{
    return gcnew CommandOutputMessage(*(cm->NativePtr));
}
inline CommandOutputMessage ^ CommandOutputMessage::Create(int _EnumCommandOutputMessageType, System::String ^ a0, List<System::String ^> ^ a1)
{
    int len = a1->Count;
    std::vector<std::string> stdvector((int)len);
    for (int i = 0; i < len; i++)
        stdvector[i] = marshalString<Encoding::E_UTF8>(a1[i]);
    return gcnew CommandOutputMessage(::CommandOutputMessage(CommandOutputMessageType(_EnumCommandOutputMessageType), marshalString<Encoding::E_UTF8>(a0), std::move(stdvector)));
    /*::CommandOutputMessageType(_EnumCommandOutputMessageType), marshalString<Encoding::E_UTF8>(a0), std::move(stdvector))*/
}

inline System::String ^ CommandOutputMessage::GetMessageId()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getMessageId());
}
inline List<System::String ^> ^ CommandOutputMessage::GetParams()
{
    auto& stdvector = NativePtr->getParams();
    auto len = (int)stdvector.size();
    auto ret = gcnew List<System::String ^>(len);
    for (int i = 0; i < len; ++i)
        ret[i] = marshalString<Encoding::E_UTF8>(stdvector[i]);
    return ret;
}
inline int CommandOutputMessage::GetType()
{
    return int(NativePtr->getType());
}
} // namespace MC
