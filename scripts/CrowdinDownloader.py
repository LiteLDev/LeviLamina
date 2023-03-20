import os
from shutil import copy
import sys
from crowdin_api import CrowdinClient
import requests
from zipfile import ZipFile

PROJECT_ID = '526672'
OUTPUT_DIR = './out/'


class Client(CrowdinClient):
    TOKEN = sys.argv[1]


def request(url):
    resp = requests.get(url)
    if (resp.status_code == 200):
        return resp.content
    else:
        print("ERROR: " + str(resp.status_code) + " " + resp.reason)
        return None

os.makedirs(OUTPUT_DIR, exist_ok=True)
client = Client()
# download source file
files = client.source_files.list_files(PROJECT_ID)
file_id = files['data'][0]['data']['id']
download_info = client.source_files.download_file(PROJECT_ID, file_id)
url = download_info['data']['url']
with open(OUTPUT_DIR + 'en.json', 'wb') as file:
    file.write(request(url))
print('Download source finished.')

build = client.translations.build_project_translation(PROJECT_ID, {})['data']
status = ''
while (status != 'finished'):
    info = client.translations.check_project_build_status(PROJECT_ID, build['id'])
    status = info['data']['status']
    if (status != 'finished'):
        print('Build progress: {}%'.format(info['data']['progress']))
download_info = client.translations.download_project_translations(PROJECT_ID, build['id'])
url = download_info['data']['url']
with open('temp.zip', 'wb') as file:
    file.write(request(url))
    print('Zip file downloaded!')

zip = ZipFile('temp.zip')
os.makedirs('./temp', exist_ok=True)
zip.extractall('./temp')
for f in os.listdir('./temp'):
    if os.path.isdir('./temp/' + f):
        f1 = f
        if f.find('-') != -1:
            f1 = f.replace('-', '_')
        copy('./temp/' + f + '/locale.json', OUTPUT_DIR + f1 + '.json')
        if os.path.exists('./temp/' + f + '/cpp-docs-locale.txt'):
            os.remove('./temp/' + f + '/cpp-docs-locale.txt')
        
        os.remove('./temp/' + f + '/locale.json')
        os.removedirs('./temp/' + f)

zip.close()
os.remove('temp.zip')
print('Finished!')
