#include <string>

#include <plog/Log.h>
#include <plog/Init.h>
#include <plog/Appenders/ConsoleAppender.h>
#include <plog/Formatters/TxtFormatter.h>

int main(int argc, char const* argv[]) {
  plog::ConsoleAppender<plog::TxtFormatter> appender;
#ifdef DEBUG
  plog::init(plog::debug, &appender);
#else
  plog::init(plog::info, &appender);
#endif

  PLOG_INFO << "initializing...";

  return 0;
}
