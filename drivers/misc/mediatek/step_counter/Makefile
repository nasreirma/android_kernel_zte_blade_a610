
# In case the platform does NOT support this type of sensors
#modify@zte.com.cn 20160202 begin
ccflags-y += -I$(srctree)/drivers/misc/mediatek/hwmon/include
#modify@zte.com.cn 20160202 end
obj-y	+= step_counter.o

ifeq ($(CONFIG_CUSTOM_KERNEL_STEP_COUNTER),"OTHER_VENDOR")
obj-y += other_vendor/
endif
