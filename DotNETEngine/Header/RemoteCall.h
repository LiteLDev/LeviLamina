#pragma once
#include <RemoteCallAPI.h>
#include "../Main/.NetGlobal.hpp"
#include "../Tools/NativeCallbackConverter.hpp"

namespace LLNET::RemoteCall
{
public
ref class RemoteCallAPI abstract
{
public:
    delegate String ^ CallbackFn(List<String ^> ^);
    static bool ExportFunc(String ^ nameSpace, String ^ funcName, CallbackFn ^ fn);
    static bool ExportFunc(String ^ nameSpace, String ^ funcName, CallbackFn ^ fn, IntPtr handler);

    static CallbackFn ^ ImportFunc(String ^ nameSpace, String ^ funcName);

    static bool HasFunc(String ^ nameSpace, String ^ funcName);
    static bool RemoveFunc(String ^ nameSpace, String ^ funcName);
    static bool RemoveNameSpace(String ^ nameSpace);
    static bool RemoveFuncs(List<Pair<String ^, String ^>> ^ funcs);

public:
    using ValueType = ::RemoteCall::ValueType;
    //∑¿÷πgcªÿ ’
    static Dictionary<uint64_t, NativeCallbackHandler ^> ^ CallbackData = gcnew Dictionary<uint64_t, NativeCallbackHandler ^>;

private:
    ref class CallbackWarpper
    {
    private:
        ::RemoteCall::CallbackFn* pFunc;
        String ^ Invoke(List<String ^> ^ list) {
            NULL_ARGS_CHEEK(list);

            auto count = (size_t)list->Count;
            std::vector<::RemoteCall::ValueType> stdvector;
            stdvector.resize(count);
            for (auto i = 0; i < count; ++i)
            {
                stdvector.emplace_back(marshalString(list[i]));
            }
            auto ret = (*pFunc)(stdvector);
            return marshalString(ret);
        };
        CallbackWarpper(::RemoteCall::CallbackFn* p)
            : pFunc(p)
        {
        }

    public:
        static CallbackFn ^ Create(::RemoteCall::CallbackFn* p) {
            auto instance = gcnew CallbackWarpper(p);
            return gcnew CallbackFn(instance, &CallbackWarpper::Invoke);
        }
    };
};
} // namespace LLNET::RemoteCall
