```
Traceback (most recent call last):
  File "C:\Users\Matt Dewar\Dropbox\Fanuc\rossum-distrib\ktransw.py", line 846, in <module>
    main()
  File "C:\Users\Matt Dewar\Dropbox\Fanuc\rossum-distrib\ktransw.py", line 277, in main
    write_manifest(FILE_MANIFEST, [os.path.split(f)[-1] for f in kl_files], os.path.split(kl_file)[-1])
  File "C:\Users\Matt Dewar\Dropbox\Fanuc\rossum-distrib\ktransw.py", line 642, in write_manifest
    for key in file_list.keys():
AttributeError: 'NoneType' object has no attribute 'keys'
```