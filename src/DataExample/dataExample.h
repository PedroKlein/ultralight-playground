#pragma once

#include <AppCore/JSHelpers.h>
using namespace ultralight;
template <typename T>
class DataExample
{
private:
    T data;
    size_t id;

public:
    DataExample(T data, size_t id)
    {
        this->data = data;
        this->id = id;
    }

    ~DataExample()
    {
    }

    T getData()
    {
        return data;
    }

    size_t getId()
    {
        return id;
    }

    JSObject toJsObject(JSContextRef &context)
    {
        JSObject res;
        JSObjectSetProperty(context, res, JSStringCreateWithUTF8CString("data"), JSValue(data), NULL, NULL);
        JSObjectSetProperty(context, res, JSStringCreateWithUTF8CString("id"), JSValue(id), NULL, NULL);
        return res;
    }

    // DataExample(T data, size_t id);
    // ~DataExample();

    // T getData();
    // size_t getId();
};
