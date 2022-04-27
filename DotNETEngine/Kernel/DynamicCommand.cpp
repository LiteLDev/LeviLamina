#include "../Header/DynamicCommand.h"
#include <memory>

namespace LLNET::DynamicCommand
{
DynamicCommand ^ DynamicCommand::Result::Command::get()
{
    return gcnew DynamicCommand((::DynamicCommand*)NativePtr->command);
}
DynamicCommandInstance ^ DynamicCommand::Result::Instance::get()
{
    return gcnew DynamicCommandInstance((::DynamicCommandInstance*)NativePtr->instance);
}
MC::CommandOrigin ^ DynamicCommand::Result::Origin::get()
{
    return gcnew MC::CommandOrigin((::CommandOrigin*)NativePtr->origin);
}
inline DynamicCommand::Result ^ DynamicCommand::Result::Create(ParameterPtr ^ ptr, DynamicCommand ^ command, MC::CommandOrigin ^ origin, DynamicCommandInstance ^ instance)
{
    return gcnew Result(::DynamicCommand::Result(ptr->NativePtr, command->NativePtr, origin->NativePtr, instance->NativePtr));
}

inline DynamicCommand::Result ^ DynamicCommand::Result::Create(ParameterPtr ^ ptr, DynamicCommand ^ command, MC::CommandOrigin ^ origin)
{
    return gcnew Result(::DynamicCommand::Result(ptr->NativePtr, command->NativePtr, origin->NativePtr));
}

inline DynamicCommand::Result ^ DynamicCommand::Result::Create()
{
    return gcnew Result(::DynamicCommand::Result());
}
System::String ^ DynamicCommand::Result::EnumValue::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getEnumValue());
}
DynamicCommand::ParameterType DynamicCommand::Result::GetParameterType()
{
    return ParameterType(NativePtr->getType());
}
System::String ^ DynamicCommand::Result::Name::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getName());
}
System::String ^ DynamicCommand::Result::toDebugString()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->toDebugString());
}
DynamicCommandInstance ^ DynamicCommand::Result::GetInstance()
{
    return gcnew DynamicCommandInstance((::DynamicCommandInstance*)NativePtr->getInstance());
}
String ^ DynamicCommand::Result::ToString()
{
    return toDebugString();
}
inline DynamicCommandInstance ^ DynamicCommand::CreateCommand(String ^ name, String ^ description, Dictionary<String ^, List<String ^> ^> ^ enums, List<ParameterData ^> ^ params, List<List<String ^> ^> ^ overloads, CallBackFn ^ callback, MC::CommandPermissionLevel permission, MC::CommandFlag ^ flag1, MC::CommandFlag ^ flag2, IntPtr handler)
{

    if (handler == IntPtr::Zero)
        handler = IntPtr(MODULE);


    std::unordered_map<std::string, std::vector<std::string>> enumsMap;

    std::vector<::DynamicCommand::ParameterData> paramsData;

    std::vector<std::vector<std::string>> overLoads;

    auto callbackfn = CallBackFnManager::Create(callback);

    try
    {
        for each (auto % map in enums)
        {
            std::vector<std::string> vector;
            vector.resize((int)map.Value->Count);
            for each (auto vec in map.Value)
            {
                vector.emplace_back(marshalString<Encoding::E_UTF8>(vec));
            }
            enumsMap[marshalString<Encoding::E_UTF8>(map.Key)] = std::move(vector);
        }

        for each (auto var in params)
        {
            paramsData.emplace_back(*(var->NativePtr));
        }

        for each (auto var in overloads)
        {
            std::vector<std::string> vector;
            vector.resize((size_t)var->Count);
            for each (auto vec in var)
            {
                vector.emplace_back(marshalString<Encoding::E_UTF8>(vec));
            }
            overLoads.emplace_back(std::move(vector));
        }

        return gcnew DynamicCommandInstance(::DynamicCommand::createCommand(
                                                marshalString<Encoding::E_UTF8>(name),
                                                marshalString<Encoding::E_UTF8>(description),
                                                std::move(enumsMap),
                                                std::move(paramsData),
                                                std::move(overLoads),
                                                callbackfn,
                                                ::CommandPermissionLevel(permission),
                                                flag1,
                                                flag2,
                                                (HMODULE)(void*)handler)
                                                .release(),
                                            true);
    }
    catch (const std::exception&)
    {
    }
    finally
    {
        paramsData.~vector();
        overLoads.~vector();
    }
    return nullptr;
}
inline DynamicCommandInstance ^ DynamicCommand::Setup(DynamicCommandInstance ^ commandInstance)
{
    return gcnew DynamicCommandInstance(
        (::DynamicCommandInstance*)::DynamicCommand::setup(std::unique_ptr<::DynamicCommandInstance>(commandInstance->NativePtr)));
}
inline bool DynamicCommand::UnregisterCommand(String ^ name)
{
    return ::DynamicCommand::unregisterCommand(marshalString<Encoding::E_UTF8>(name));
}
inline bool DynamicCommand::UpdateAvailableCommands()
{
    return ::DynamicCommand::updateAvailableCommands();
}
inline DynamicCommandInstance ^ DynamicCommand::GetInstance()
{
    return gcnew DynamicCommandInstance((::DynamicCommandInstance*)NativePtr->getInstance());
}
inline DynamicCommandInstance ^ DynamicCommand::GetInstance(String ^ commandName)
{
    return gcnew DynamicCommandInstance((::DynamicCommandInstance*)::DynamicCommand::getInstance(marshalString<Encoding::E_UTF8>(commandName)));
}
inline DynamicCommand::ParameterPtr ^ DynamicCommand::ParameterPtr::Create(ParameterType type, size_t offset)
{
    return gcnew ParameterPtr(::DynamicCommand::ParameterPtr(::DynamicCommand::ParameterType(type), offset));
}
bool DynamicCommand::ParameterPtr::IsValueSet(DynamicCommand ^ command)
{
    return NativePtr->isValueSet(command->NativePtr);
}
DynamicCommand::Result ^ DynamicCommand::ParameterPtr::GetResult(DynamicCommand ^ command, MC::CommandOrigin ^ origin)
{
    return gcnew Result(NativePtr->getResult(command->NativePtr, origin));
}
inline size_t DynamicCommand::ParameterPtr::GetOffset()
{
    return size_t(NativePtr->getOffset());
}
inline DynamicCommand::ParameterData ^ DynamicCommand::ParameterData::Create(ParameterData ^ data)
{
    return gcnew ParameterData(::DynamicCommand::ParameterData(data));
}
inline DynamicCommand::ParameterData ^ DynamicCommand::ParameterData::Create(System::String ^ name, ParameterType type, bool optional, System::String ^ enumOptions, System::String ^ identifier, MC::CommandParameterOption parameterOption)
{
    return gcnew ParameterData(::DynamicCommand::ParameterData(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type),
        optional,
        marshalString<Encoding::E_UTF8>(enumOptions),
        marshalString<Encoding::E_UTF8>(identifier),
        ::CommandParameterOption(parameterOption)));
}
inline DynamicCommand::ParameterData ^ DynamicCommand::ParameterData::Create(System::String ^ name, ParameterType type, bool optional, System::String ^ enumOptions, System::String ^ identifier)
{
    return Create(name, type, optional, enumOptions, identifier, MC::CommandParameterOption::None);
}
inline DynamicCommand::ParameterData ^ DynamicCommand::ParameterData::Create(System::String ^ name, ParameterType type, bool optional, System::String ^ enumOptions)
{
    return Create(name, type, optional, enumOptions, "");
}
inline DynamicCommand::ParameterData ^ DynamicCommand::ParameterData::Create(System::String ^ name, ParameterType type, bool optional)
{
    return Create(name, type, optional, "");
}
inline DynamicCommand::ParameterData ^ DynamicCommand::ParameterData::Create(System::String ^ name, ParameterType type)
{
    return Create(name, type, false);
}
inline DynamicCommand::ParameterData ^ DynamicCommand::ParameterData::Create(System::String ^ name, ParameterType type, System::String ^ enumOptions, System::String ^ identifier, MC::CommandParameterOption parameterOption)
{
    return gcnew ParameterData(::DynamicCommand::ParameterData(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type),
        marshalString<Encoding::E_UTF8>(enumOptions),
        marshalString<Encoding::E_UTF8>(identifier),
        ::CommandParameterOption(parameterOption)));
}
inline DynamicCommand::ParameterData ^ DynamicCommand::ParameterData::Create(System::String ^ name, ParameterType type, System::String ^ enumOptions, System::String ^ identifier)
{
    return Create(name, type, enumOptions, identifier, MC::CommandParameterOption::None);
}
inline DynamicCommand::ParameterData ^ DynamicCommand::ParameterData::Create(System::String ^ name, ParameterType type, System::String ^ enumOptions)
{
    return Create(name, type, enumOptions, "");
}
MC::CommandParameterData ^ DynamicCommand::ParameterData::MakeParameterData()
{
    return gcnew MC::CommandParameterData(NativePtr->makeParameterData());
}
inline void DynamicCommand::ParameterData::SetOptional(bool optional)
{
    return NativePtr->setOptional(optional);
}
inline bool DynamicCommand::ParameterData::SetEnumOptions(System::String ^ enumOptions)
{
    return NativePtr->setEnumOptions(marshalString<Encoding::E_UTF8>(enumOptions));
}
inline DynamicCommandInstance ^ DynamicCommand::CreateCommand(String ^ name, String ^ description, MC::CommandPermissionLevel permission, MC::CommandFlag ^ flag1, MC::CommandFlag ^ flag2, IntPtr handler)
{
    return gcnew DynamicCommandInstance(::DynamicCommand::createCommand(marshalString<Encoding::E_UTF8>(name), marshalString<Encoding::E_UTF8>(description), ::CommandPermissionLevel(permission), flag1, flag2, (HMODULE)(void*)handler).release(), true);
}
inline DynamicCommandInstance ^ DynamicCommand::CreateCommand(String ^ name, String ^ description, MC::CommandPermissionLevel permission, MC::CommandFlag ^ flag1, MC::CommandFlag ^ flag2)
{
    auto& a = ::DynamicCommand::createCommand(marshalString<Encoding::E_UTF8>(name), marshalString<Encoding::E_UTF8>(description), ::CommandPermissionLevel(permission), (::CommandFlag)flag1, (::CommandFlag)flag2, MODULE);
    return gcnew DynamicCommandInstance(a.release(), true);
}
inline DynamicCommandInstance ^ DynamicCommand::CreateCommand(String ^ name, String ^ description, MC::CommandPermissionLevel permission, MC::CommandFlag ^ flag1)
{
    MC::CommandFlag ^ flag = gcnew MC::CommandFlag;
    flag->value = MC::CommandFlagValue(0);
    return CreateCommand(name, description, permission, flag1, flag);
}
inline DynamicCommandInstance ^ DynamicCommand::CreateCommand(String ^ name, String ^ description, MC::CommandPermissionLevel permission)
{
    MC::CommandFlag ^ flag = gcnew MC::CommandFlag;
    flag->value = MC::CommandFlagValue(128);
    return CreateCommand(name, description, permission, flag);
}
inline DynamicCommandInstance ^ DynamicCommand::CreateCommand(String ^ name, String ^ description)
{
    return CreateCommand(name, description, MC::CommandPermissionLevel::GameMasters);
}
DynamicCommand::CallBackFnManager::CallBackFnManager(CallBackFn ^ _callback)
{
    callback = _callback;
}
void NATIVECALLBACK DynamicCommand::CallBackFnManager::NativeCallbackFunc(
    ::DynamicCommand const& cmd,
    ::CommandOrigin const& origin,
    ::CommandOutput& output,
    std::unordered_map<std::string, ::DynamicCommand::Result>& results)
{
    auto dictionary = gcnew Dictionary<String ^, DynamicCommand::Result ^>((int)results.size());
    for (auto iter = results.begin(); iter != results.end(); ++iter)
        dictionary->Add(
            marshalString<Encoding::E_UTF8>(iter->first),
            gcnew DynamicCommand::Result(std::move(iter->second)));

    callback(gcnew DynamicCommand((::DynamicCommand*)&cmd),
             gcnew MC::CommandOrigin((::CommandOrigin*)&origin),
             gcnew MC::CommandOutput((::CommandOutput*)&output),
             dictionary);
}
DynamicCommand::CallBackFnManager::pNativeCallBackFn DynamicCommand::CallBackFnManager::Create(CallBackFn ^ callback)
{
    auto manager = gcnew CallBackFnManager(callback);

    NativeCallBackFn ^ nativecallback = gcnew NativeCallBackFn(manager, &DynamicCommand::CallBackFnManager::NativeCallbackFunc);
    gchList->Add(GCHandle::Alloc(nativecallback));

    pNativeCallBackFn pFn = static_cast<pNativeCallBackFn>((void*)Marshal::GetFunctionPointerForDelegate(nativecallback));
    return pFn;
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::ParameterIndex::Create(DynamicCommandInstance ^ instance, size_t index)
{
    return gcnew ParameterIndex(::DynamicCommandInstance::ParameterIndex(instance, index));
}
inline DynamicCommandInstance::ParameterIndex::operator size_t()
{
    return NativePtr->operator size_t();
}
inline DynamicCommand::ParameterData ^ DynamicCommandInstance::ParameterIndex::GetParameterData()
{
    return gcnew DynamicCommand::ParameterData(NativePtr->operator->());
}
inline bool DynamicCommandInstance::ParameterIndex::IsValid()
{
    return NativePtr->isValid();
}
Dictionary<String ^, DynamicCommand::ParameterPtr ^> ^ DynamicCommandInstance::ParameterPtrs::get()
{
    auto& ptrs = (*NativePtr).parameterPtrs;
    auto ret = gcnew Dictionary<String ^, DynamicCommand::ParameterPtr ^>((int)ptrs.size());
    for (auto& kv : ptrs)
        ret->Add(marshalString<Encoding::E_UTF8>(kv.first), gcnew DynamicCommand::ParameterPtr(std::move(kv.second)));
    return ret;
}
void DynamicCommandInstance::ParameterPtrs::set(Dictionary<String ^, DynamicCommand::ParameterPtr ^> ^ val)
{
    std::unordered_map<std::string, ::DynamicCommand::ParameterPtr> map;
    for each (auto var in val)
        map.emplace(marshalString<Encoding::E_UTF8>(var.Key), *var.Value->NativePtr);
    (*NativePtr).parameterPtrs = std::move(map);
}
inline DynamicCommandInstance ^ DynamicCommandInstance::Create(String ^ name, String ^ description, MC::CommandPermissionLevel permission, MC::CommandFlag ^ flag, IntPtr handler)
{
    return gcnew DynamicCommandInstance(::DynamicCommandInstance::create(
                                            marshalString<Encoding::E_UTF8>(name),
                                            marshalString<Encoding::E_UTF8>(description),
                                            ::CommandPermissionLevel(permission),
                                            ::CommandFlag{(::CommandFlagValue(flag->value))},
                                            (HMODULE)(void*)handler)
                                            .release(),
                                        true);
}
inline DynamicCommandInstance ^ DynamicCommandInstance::Create(String ^ name, String ^ description, MC::CommandPermissionLevel permission, MC::CommandFlag ^ flag)
{
    return Create(name, description, permission, flag, IntPtr(MODULE));
}
inline String ^ DynamicCommandInstance::SetEnum(String ^ description, List<String ^> ^ values)
{
    std::vector<std::string> stringvector;
    for each (auto var in values)
        stringvector.emplace_back(marshalString<Encoding::E_UTF8>(var));
    return marshalString<Encoding::E_UTF8>((*NativePtr).setEnum(marshalString<Encoding::E_UTF8>(description), stringvector));
}
inline String ^ DynamicCommandInstance::GetEnumValue(int index)
{
    return marshalString<Encoding::E_UTF8>((*NativePtr).getEnumValue(index));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::NewParameter(DynamicCommand::ParameterData ^ data)
{
    auto ret = gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).newParameter(std::move(*data->NativePtr)));
    return ret;
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::NewParameter(String ^ name, DynamicCommand::ParameterType type, bool optional, String ^ description, String ^ identifier, MC::CommandParameterOption parameterOption)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).newParameter(marshalString<Encoding::E_UTF8>(name),
                                                                             ::DynamicCommand::ParameterType(type),
                                                                             optional,
                                                                             marshalString<Encoding::E_UTF8>(description),
                                                                             marshalString<Encoding::E_UTF8>(identifier),
                                                                             ::CommandParameterOption(parameterOption)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::NewParameter(String ^ name, DynamicCommand::ParameterType type, bool optional, String ^ description, String ^ identifier)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).newParameter(marshalString<Encoding::E_UTF8>(name),
                                                                             ::DynamicCommand::ParameterType(type),
                                                                             optional,
                                                                             marshalString<Encoding::E_UTF8>(description),
                                                                             marshalString<Encoding::E_UTF8>(identifier)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::NewParameter(String ^ name, DynamicCommand::ParameterType type, bool optional, String ^ description)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).newParameter(marshalString<Encoding::E_UTF8>(name),
                                                                             ::DynamicCommand::ParameterType(type),
                                                                             optional,
                                                                             marshalString<Encoding::E_UTF8>(description)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::NewParameter(String ^ name, DynamicCommand::ParameterType type, bool optional)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).newParameter(marshalString<Encoding::E_UTF8>(name),
                                                                             ::DynamicCommand::ParameterType(type),
                                                                             optional));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::NewParameter(String ^ name, DynamicCommand::ParameterType type)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).newParameter(marshalString<Encoding::E_UTF8>(name),
                                                                             ::DynamicCommand::ParameterType(type)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::FindParameterIndex(String ^ param)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).findParameterIndex(marshalString<Encoding::E_UTF8>(param)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::Mandatory(String ^ name, DynamicCommand::ParameterType type, String ^ description, String ^ identifier, MC::CommandParameterOption parameterOption)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).mandatory(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type),
        marshalString<Encoding::E_UTF8>(description),
        marshalString<Encoding::E_UTF8>(identifier),
        ::CommandParameterOption(parameterOption)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::Mandatory(String ^ name, DynamicCommand::ParameterType type, String ^ description, String ^ identifier)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).mandatory(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type),
        marshalString<Encoding::E_UTF8>(description),
        marshalString<Encoding::E_UTF8>(identifier)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::Mandatory(String ^ name, DynamicCommand::ParameterType type, String ^ description, MC::CommandParameterOption parameterOption)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).mandatory(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type),
        marshalString<Encoding::E_UTF8>(description)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::Mandatory(String ^ name, DynamicCommand::ParameterType type, String ^ description)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).mandatory(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type),
        marshalString<Encoding::E_UTF8>(description)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::Mandatory(String ^ name, DynamicCommand::ParameterType type, MC::CommandParameterOption parameterOption)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).mandatory(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type),
        ::CommandParameterOption(parameterOption)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::Mandatory(String ^ name, DynamicCommand::ParameterType type)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).mandatory(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::Optional(String ^ name, DynamicCommand::ParameterType type, String ^ description, String ^ identifier, MC::CommandParameterOption parameterOption)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).optional(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type),
        marshalString<Encoding::E_UTF8>(description),
        marshalString<Encoding::E_UTF8>(identifier),
        ::CommandParameterOption(parameterOption)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::Optional(String ^ name, DynamicCommand::ParameterType type, String ^ description, String ^ identifier)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).optional(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type),
        marshalString<Encoding::E_UTF8>(description),
        marshalString<Encoding::E_UTF8>(identifier)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::Optional(String ^ name, DynamicCommand::ParameterType type, String ^ description, MC::CommandParameterOption parameterOption)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).optional(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type),
        marshalString<Encoding::E_UTF8>(description),
        ::CommandParameterOption(parameterOption)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::Optional(String ^ name, DynamicCommand::ParameterType type, String ^ description)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).optional(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type),
        marshalString<Encoding::E_UTF8>(description)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::Optional(String ^ name, DynamicCommand::ParameterType type, MC::CommandParameterOption parameterOption)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).optional(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type),
        ::CommandParameterOption(parameterOption)));
}
inline DynamicCommandInstance::ParameterIndex ^ DynamicCommandInstance::Optional(String ^ name, DynamicCommand::ParameterType type)
{
    return gcnew DynamicCommandInstance::ParameterIndex((*NativePtr).optional(
        marshalString<Encoding::E_UTF8>(name),
        ::DynamicCommand::ParameterType(type)));
}
inline bool DynamicCommandInstance::AddOverload(List<ParameterIndex ^> ^ params)
{
    std::vector<::DynamicCommandInstance::ParameterIndex> stdvector;
    for each (auto var in params)
        stdvector.emplace_back(*var->NativePtr);
    return (*NativePtr).addOverload(std::move(stdvector));
}
inline bool DynamicCommandInstance::AddOverload(List<String ^> ^ params)
{
    std::vector<std::string> stdvector;
    for each (auto var in params)
        stdvector.emplace_back(marshalString<Encoding::E_UTF8>(var));
    return (*NativePtr).addOverload(std::move(stdvector));
}
inline bool DynamicCommandInstance::AddOverload(List<DynamicCommand::ParameterData ^> ^ params)
{
    std::vector<::DynamicCommand::ParameterData> stdvector;
    for each (auto var in params)
        stdvector.emplace_back(*var->NativePtr);
    return (*NativePtr).addOverload(std::move(stdvector));
}

inline bool DynamicCommandInstance::SetAlias(String ^ alias)
{
    return (*NativePtr).setAlias(marshalString<Encoding::E_UTF8>(alias));
}

// inline List<MC::CommandParameterData^>^ DynamicCommandInstance::buildOverload(List<ParameterIndex^>^ overload)
//{
//	std::vector<::DynamicCommandInstance::ParameterIndex> stdvector;
//	for each (auto var in overload)
//		stdvector.emplace_back(var->DeReference());
//	auto& _ret = (*NativePtr).buildOverload(stdvector);
//	stdvector.~vector();
//	auto ret = gcnew List<MC::CommandParameterData^>((int)_ret.size());
//	for (auto iter = _ret.begin(); iter != _ret.end(); ++iter)
//		ret->Add(gcnew MC::CommandParameterData(std::move(*iter)));
//	return ret;
// }

inline void DynamicCommandInstance::SetCallback(DynamicCommand::CallBackFn ^ callback)
{
    (*NativePtr).setCallback(DynamicCommand::CallBackFnManager::Create(callback));
}

inline void DynamicCommandInstance::RemoveCallback()
{
    (*NativePtr).removeCallback();
}

inline String ^ DynamicCommandInstance::SetSoftEnum(String ^ name, List<String ^> ^ values)
{
    std::vector<std::string> stdvector;
    for each (auto var in values)
        stdvector.emplace_back(marshalString<Encoding::E_UTF8>(var));
    return marshalString<Encoding::E_UTF8>((*NativePtr).setSoftEnum(marshalString<Encoding::E_UTF8>(name), stdvector));
}

inline bool DynamicCommandInstance::AddSoftEnumValues(String ^ name, List<String ^> ^ values)
{
    std::vector<std::string> stdvector;
    stdvector.resize((size_t)values->Count);
    for each (auto var in values)
        stdvector.emplace_back(marshalString<Encoding::E_UTF8>(var));
    return (*NativePtr).addSoftEnumValues(marshalString<Encoding::E_UTF8>(name), stdvector);
}

inline bool DynamicCommandInstance::RemoveSoftEnumValues(String ^ name, List<String ^> ^ values)
{
    std::vector<std::string> stdvector;
    stdvector.resize((size_t)values->Count);
    for each (auto var in values)
        stdvector.emplace_back(marshalString<Encoding::E_UTF8>(var));
    return (*NativePtr).addSoftEnumValues(marshalString<Encoding::E_UTF8>(name), stdvector);
}

inline List<String ^> ^ DynamicCommandInstance::GetSoftEnumValues(String ^ name)
{
    auto& stdvector = ::DynamicCommandInstance::getSoftEnumValues(marshalString<Encoding::E_UTF8>(name));
    auto ret = gcnew List<String ^>((int)stdvector.size());
    for (auto iter = stdvector.begin(); iter != stdvector.end(); ++iter)
        ret->Add(marshalString<Encoding::E_UTF8>(*iter));
    return ret;
}

inline List<String ^> ^ DynamicCommandInstance::GetSoftEnumNames()
{
    auto& stdvector = ::DynamicCommandInstance::getSoftEnumNames();
    auto ret = gcnew List<String ^>((int)stdvector.size());
    for (auto iter = stdvector.begin(); iter != stdvector.end(); ++iter)
        ret->Add(marshalString<Encoding::E_UTF8>(*iter));
    return ret;
}

inline String ^ DynamicCommandInstance::GetCommandName()
{
    return marshalString<Encoding::E_UTF8>((*NativePtr).getCommandName());
}

inline bool DynamicCommandInstance::HasRegistered()
{
    return (*NativePtr).hasRegistered();
}

} // namespace LLNET::DynamicCommand
