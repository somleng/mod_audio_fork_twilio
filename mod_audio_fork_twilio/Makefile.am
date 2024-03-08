include $(top_srcdir)/build/modmake.rulesam
MODNAME=mod_audio_fork_twilio

mod_LTLIBRARIES = mod_audio_fork_twilio.la
mod_audio_fork_twilio_la_SOURCES  = mod_audio_fork_twilio.c lws_glue.cpp parser.cpp audio_pipe.cpp twilio_helper.cpp
mod_audio_fork_twilio_la_CFLAGS   = $(AM_CFLAGS)
mod_audio_fork_twilio_la_CXXFLAGS = $(AM_CXXFLAGS) -std=c++11

mod_audio_fork_twilio_la_LIBADD   = $(switch_builddir)/libfreeswitch.la
mod_audio_fork_twilio_la_LDFLAGS  = -avoid-version -module -no-undefined -shared `pkg-config --libs libwebsockets` 
