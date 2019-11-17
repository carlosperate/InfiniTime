#pragma once
#include "Logger.h"

namespace Pinetime {
  namespace Logging{
    class NrfLogger : public Logger {
      public:
        void Init() override;
        void Resume() override;

      private:
        static void Process(void*);
        TaskHandle_t m_logger_thread;
    };
  }
}

