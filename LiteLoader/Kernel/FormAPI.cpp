#include <FormAPI.h>
#include <LoggerAPI.h>
#include <memory>
#include "third-party/Nlohmann/fifo_json.hpp"
#include <MC/ServerPlayer.hpp>
using namespace std;

#define RAND_FORM_ID() (unsigned)((rand()<<16)+rand())

namespace Form
{
	//////////////////////////////// Simple Form ////////////////////////////////
	string Button::serialize()
	{
		fifo_json button;
		button["text"] = text;
		if (!image.empty())
		{
			fifo_json imageObj;
			imageObj["type"] = image.find("textures/") == 0 ? "path" : "url";
			imageObj["data"] = image;
			button["image"] = imageObj;
		}
		return button.dump();
	}

	SimpleForm& SimpleForm::append(const Button& element)
	{
		elements.emplace_back(make_shared<Button>(element));
		return *this;
	}

	string SimpleForm::serialize()
	{
		fifo_json form = fifo_json::parse(R"({"title":"","content":"","buttons":[],"type":"form"})");
		form["title"] = title;
		form["content"] = content;
		for (auto& e : elements)
			form["buttons"].push_back(fifo_json::parse(e->serialize()));
		return form.dump();
	}

	bool SimpleForm::sendTo(ServerPlayer* player, Callback callback)
	{

		return false;
	}

	//////////////////////////////// Custom Form ////////////////////////////////
	string Label::serialize()
	{
		fifo_json itemAdd;
		itemAdd["type"] = "label";
		itemAdd["text"] = text;
		return itemAdd.dump();
	}

	string Input::serialize()
	{
		fifo_json itemAdd;
		itemAdd["type"] = "input";
		itemAdd["text"] = title;
		if (!placeholder.empty())
			itemAdd["placeholder"] = placeholder;
		if (!def.empty())
			itemAdd["default"] = def;
		return itemAdd.dump();
	}

	string Toggle::serialize()
	{
		fifo_json itemAdd;
		itemAdd["type"] = "toggle";
		itemAdd["text"] = title;
		if (def)
			itemAdd["default"] = def;
		return itemAdd.dump();
	}

	string Dropdown::serialize()
	{
		fifo_json itemAdd;
		itemAdd["type"] = "dropdown";
		itemAdd["text"] = title;

		fifo_json items = fifo_json::array();
		for (auto& str : options)
			items.push_back(str);
		itemAdd["options"] = items;

		if (def > 0)
			itemAdd["default"] = def;
		return itemAdd.dump();
	}

	string Slider::serialize()
	{
		fifo_json itemAdd;
		itemAdd["type"] = "slider";
		itemAdd["text"] = title;

		if (min >= max)
			max = min + 1;
		itemAdd["min"] = min;
		itemAdd["max"] = max;
		itemAdd["step"] = step >= 1 ? step : 1;
		if (def > 0 && min <= def && max >= def)
		{
			itemAdd["default"] = def;
		}
		return itemAdd.dump();
	}

	string StepSlider::serialize()
	{
		fifo_json itemAdd;
		itemAdd["type"] = "step_slider";
		itemAdd["text"] = title;

		fifo_json items = fifo_json::array();
		for (auto& str : options)
			items.push_back(str);
		itemAdd["steps"] = items;

		int maxIndex = items.size() - 1;
		if (def >= 0 && def <= maxIndex)
		{
			itemAdd["default"] = def;
		}
		return itemAdd.dump();
	}

	CustomForm& CustomForm::append(const Label& element)
	{
		elements[element.name] = make_shared<Label>(element);
		return *this;
	}

	CustomForm& CustomForm::append(const Input& element)
	{
		elements[element.name] = make_shared<Input>(element);
		return *this;
	}

	CustomForm& CustomForm::append(const Toggle& element)
	{
		elements[element.name] = make_shared<Toggle>(element);
		return *this;
	}

	CustomForm& CustomForm::append(const Dropdown& element)
	{
		elements[element.name] = make_shared<Dropdown>(element);
		return *this;
	}

	CustomForm& CustomForm::append(const Slider& element)
	{
		elements[element.name] = make_shared<Slider>(element);
		return *this;
	}

	CustomForm& CustomForm::append(const StepSlider& element)
	{
		elements[element.name] = make_shared<StepSlider>(element);
		return *this;
	}

	string CustomForm::serialize()
	{
		fifo_json form = fifo_json::parse(R"({ "title":"", "type":"custom_form", "content":[], "buttons":[] })");
		form["title"] = title;
		for (auto &[k,v] : elements)
			form["content"].push_back(fifo_json::parse(v->serialize()));
		return form.dump();
	}

	bool CustomForm::sendTo(ServerPlayer* player, Callback callback)
	{

		return false;
	}
}

using namespace Form;

//////////////////////////////// Form Id & Data ////////////////////////////////
map<unsigned, bool> isSimpleForm;
map<unsigned, std::shared_ptr<SimpleForm>> simpleForms;
map<unsigned, std::shared_ptr<CustomForm>> customForms;

unsigned NewFormId()
{
	unsigned formId;
	do
	{
		formId = RAND_FORM_ID();
	} while (isSimpleForm.find(formId) != isSimpleForm.end());
	return formId;
}

//////////////////////////////// Form Callback ////////////////////////////////
class Packet;
class ServerNetworkHandler;
class NetworkIdentifier;

Player* GetPlayerFromPacket(ServerNetworkHandler* handler, NetworkIdentifier* id, Packet* packet)
{
	return SymCall("?_getServerPlayer@ServerNetworkHandler@@AEAAPEAVServerPlayer@@AEBVNetworkIdentifier@@E@Z",
		Player*, ServerNetworkHandler*, NetworkIdentifier*, char)(handler, id, dAccess<char>(packet, 16));
}

void CallFormCallback(Player* player, unsigned formId, const string& data)
{
	if (isSimpleForm.find(formId) == isSimpleForm.end())
		return;

	if (isSimpleForm[formId])
	{
		int chosen = stoi(data);

		//Simple Form Callback
		auto form = simpleForms[formId];
		if (form->callback)
			form->callback(chosen);
		//Button Callback
		auto button = dynamic_pointer_cast<Button>(form->elements[chosen]);
		if (button->callback)
			button->callback();

		simpleForms.erase(formId);
	}
	else
	{
		//Custom Form Callback
		auto form = customForms[formId];
		if (form->callback)
			form->callback(form->elements);
		customForms.erase(formId);
	}
	isSimpleForm.erase(formId);
}

THook(void, "?handle@?$PacketHandlerDispatcherInstance@VModalFormResponsePacket@@$0A@@@UEBAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z",
	void* _this, NetworkIdentifier* id, ServerNetworkHandler* handler, void* pPacket)
{
	try
	{
		Packet* packet = *(Packet**)pPacket;
		Player* p = GetPlayerFromPacket(handler, id, packet);

		if (p)
		{
			unsigned formId = dAccess<unsigned>(packet, 48);
			string data = dAccess<string>(packet, 56);

			if (data.back() == '\n')
				data.pop_back();

			CallFormCallback(p, formId, data);
		}
	}
	catch (const seh_exception& e)
	{
		Logger::Error("Event Callback Failed!");
		Logger::Error("SEH Uncaught Exception Detected!");
		Logger::Error("{}", e.what());
		Logger::Error("In Event: onFormSelected");
	}
	catch (...)
	{
		Logger::Error("Event Callback Failed!");
		Logger::Error("Uncaught Exception Detected!");
		Logger::Error("In Event: onFormSelected");
	}

	original(_this, id, handler, pPacket);
}