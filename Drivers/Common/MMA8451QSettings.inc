%- Settings generated by Component Wizard
%;**%>12 Component Name %>60: %get(DeviceName,Text)
%;**%>12 Slave Address %>60: %get(I2CSlaveAddress,Text)
%;**%>12 I2C Bus %>60: %get(I2C,Text)
%;**%>12 Calibration %>60: %get(CalibrationGroup,Text)
%;**%>14 X offset %>60: %get(xCalibrationOffset,Text)
%;**%>14 Y offset %>60: %get(yCalibrationOffset,Text)
%;**%>14 Z offset %>60: %get(zCalibrationOffset,Text)
%;**%>12 Shell %>60: %get(ShellEnabled,Text)
%if %get(ShellEnabled, Bool) = 'yes'
%;**%>14 Shell %>60: %get(Shell,Text)
%;**%>14 Utility %>60: %get(Utility,Text)
%else %- ShellEnabled
%endif %- ShellEnabled
