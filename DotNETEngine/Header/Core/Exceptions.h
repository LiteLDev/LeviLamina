#pragma once
namespace LLNET::Core
{
public
ref class LiteLoaderDotNetException
    : public System::ApplicationException
{
public:
    LiteLoaderDotNetException()
        : ApplicationException()
    {
    }
};
public
ref class HookFailedException
    : public LiteLoaderDotNetException
{
public:
    HookFailedException()
        : LiteLoaderDotNetException()
    {
    }
};
public
ref class NativePluginException
    : public LiteLoaderDotNetException
{
public:
    NativePluginException()
        : LiteLoaderDotNetException()
    {
    }
};
}
