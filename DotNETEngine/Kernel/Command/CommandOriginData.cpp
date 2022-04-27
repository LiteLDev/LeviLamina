#include "../../Header/Command/CommandOriginData.hpp"

namespace MC {
	CommandOriginData^ CommandOriginData::Create(CommandOriginData^ val)
	{
		return gcnew CommandOriginData(*(val->NativePtr));
	}
	CommandOriginData^ CommandOriginData::Create()
	{
		return gcnew CommandOriginData(::CommandOriginData());
	}
	CommandOriginData^ CommandOriginData::operator=(CommandOriginData^ b)
	{
		*(this->NativePtr) = b;
		return this;
	}
}


