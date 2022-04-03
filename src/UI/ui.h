#pragma once

#include <AppCore/App.h>
#include <AppCore/Window.h>
#include <AppCore/Overlay.h>
#include <AppCore/JSHelpers.h>

using namespace ultralight;

class UI : public AppListener,
           public WindowListener,
           public LoadListener,
           public ViewListener
{
public:
  UI();

  virtual ~UI();

  // Start the run loop.
  virtual void Run();

  // This is called continuously from the app's main loop.
  virtual void OnUpdate() override;

  // This is called when the window is closing.
  virtual void OnClose() override;

  // This is called whenever the window resizes.
  virtual void OnResize(uint32_t width, uint32_t height) override;

  // This is called when the page finishes a load in one of its frames.
  virtual void OnFinishLoading(ultralight::View *caller) override;

  // This is called when the DOM has loaded in one of its frames.
  virtual void OnDOMReady(ultralight::View *caller) override;

  // This is called when the page requests to change the Cursor.
  virtual void OnChangeCursor(ultralight::View *caller,
                              Cursor cursor) override;

  virtual void OnChangeTitle(ultralight::View *caller,
                             const String &title) override;

  JSValue UI::GetMessage(const JSObject &thisObject, const JSArgs &args);

protected:
  RefPtr<App> app_;
  RefPtr<Window> window_;
  RefPtr<Overlay> overlay_;
};
